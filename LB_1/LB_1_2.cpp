// Завдання 2
// Варіант 11
#include <iostream>
#include <cmath> // для математичних функцій

using namespace std;

int main() {
    // Вхідні дані
    double a = 1.0;
    double b = 20.01;

    // Обчислення проміжних значень
    double x1 = 0.719 / b;
    double x2 = (b * b - a * a) / (a * a + b * b);
    double x3 = cos(log(b) * M_PI / 6); // M_PI - значення числа пі

    // Обчислення y
    double y = cbrt(x1 * x2 + x3); // cbrt() - кубічний корінь

    // Виведення результату
    cout << "y = " << y << endl;

    return 0;
}