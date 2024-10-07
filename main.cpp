#include <iostream>
#include <cmath>
#include <clocale>
#include <gtest/gtest.h>

// Тип для функции f(x)
typedef double (*Func)(double);

// Пример функции f(x) = x^2
double f_square(double x) {
    return x * x;
}

// Пример функции f(x) = sin(x)
double f_sin(double x) {
    return sin(x);
}

// Пример функции f(x) = cos(x)
double f_cos(double x) {
    return cos(x);
}

// Функция для вычисления второй производной с заданной точностью
double second_derivative(Func func, double x, double eps) {
    double h = 1.0; // Начальный шаг
    double derivative_prev; // Предыдущее значение второй производной
    double derivative_curr = (func(x - h) - 2 * func(x) + func(x + h)) / (h * h); // Начальное значение

    // Понижаем h пока не достигнем желаемой точности
    do {
        h /= 2.0; // Уменьшаем шаг вдвое
        derivative_prev = derivative_curr;
        derivative_curr = (func(x - h) - 2 * func(x) + func(x + h)) / (h * h); // Пересчитываем вторую производную
    } while (fabs(derivative_curr - derivative_prev) > eps); // Проверяем, достигли ли нужной точности

    return derivative_curr; // Возвращаем окончательное значение второй производной
}

// // Основная функция для ввода и вычислений
// int main() {
//     std::setlocale(LC_ALL, "Rus");
//     std::system("chcp 1251");
//     double x; // Точка, в которой будем находить вторую производную
//     double eps; // Точность

//     std::cout << "X: ";
//     std::cin >> x;
//     std::cout << "eps: ";
//     std::cin >> eps;

//     double derivative = second_derivative(f_square, x, eps); // Вычисляем вторую производную
//     std::cout << " f(x) = x^2  " << x << ": " << derivative << std::endl;

//     return 0;
// }

TEST(SecondDerivativeTest, SquareFunc)
 {
    EXPECT_NEAR(second_derivative(f_square,1.0,1e-6),2.0,1e-6);
    EXPECT_NEAR(second_derivative(f_square,0.0,1e-6),2.0,1e-6);
 }

 TEST(SecondDerivativeTest, SinFunc)
 {
    EXPECT_NEAR(second_derivative(f_sin,0.0,1e-6),0.0,1e-6);
 }

 TEST(SecondDerivativeTest, CosFunc)
 {
    EXPECT_NEAR(second_derivative(f_cos,0.0,1e-6),1.0,1e-6);
 }
   
   