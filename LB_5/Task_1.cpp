#include <iostream>
#include <cmath>  // Для функцій sin і abs

using namespace std;

int main() {
    // Оголошуємо змінні
    double x, y;

    // Введення та обчислення для п'яти значень x
    for (int i = 1; i <= 5; i++) {
        // Введення значення x
        cout << "Enter the x value for the case " << i << ": ";
        cin >> x;

        // Обчислення значення функції y
        y = pow(sin(x), 5) + fabs(5 * x - 1.5);

        // Виведення результату
        cout << "The value of y for x =  " << x << " equals: " << y << endl;
    }

    return 0;
}