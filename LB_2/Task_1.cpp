#include <iostream>
#include <limits> // Для перевірки на помилки вводу

using namespace std;

int main() {
    // Задаємо змінні
    double x, b, c, Y;

    // Введення значень x, b, c з перевіркою на коректність
    cout << "Enter the value of x: ";
    while (!(cin >> x)) {
        cout << "Input error. Enter a numeric value for x: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Enter the value of b: ";
    while (!(cin >> b)) {
        cout << "Input error. Enter a numeric value for b: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Enter the value of c: ";
    while (!(cin >> c)) {
        cout << "Input error. Enter a numeric value for c: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // Умова для вибору формули
    if (x < 2) {
        if (x == 2 * b * x * x) {
            cout << "Error: the denominator is zero for x < 2." << endl;
            return 1;
        }
        // Обчислення Y для випадку x < 2
        Y = (x - 9 * b * x) / (x - 2 * b * x * x);
    } else {
        if (x == 5 * c * x * x * x) {
            cout << "Error: the denominator is zero for x >= 2." << endl;
            return 1;
        }
        // Обчислення Y для випадку x >= 2
        Y = (x - 2 * c * x) / (x - 5 * c * x * x * x);
    }


    cout << "The value of Y = " << Y << endl;

    return 0;
}