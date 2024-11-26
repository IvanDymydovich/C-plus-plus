//Завдання 1
//Варіант 6
#include <iostream>
#include <cmath>


double calculateY(double a, double b) {
    const double pi = 3.14159265358979323846; // значення π
    double sqrt_a = cbrt(a); // корінь третього степеня з a
    double cos_exp = cos(exp(b) - 1) * (pi / 4); // cos(%exp^b - 1) * π / 4
    double denominator = 0.5121 * (1 - log(b / a)); // 0.5121 * (1 - log(b / a))

    return (sqrt_a * cos_exp) / denominator; // результат функції
}

int main() {
    double a = 4.0, b = 1.31; // значення a та b
    double y = calculateY(a, b); // обчислення y

    std::cout << "Value y: " << y << std::endl; // виведення результату
    return 0;
}