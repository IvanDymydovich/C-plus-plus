#include <iostream>

using namespace std;

int main() {
    long long product = 1;  // Змінна для збереження добутку

    // Цикл з параметром для перебору чисел від 1 до 20
    for (int i = 2; i <= 20; i += 2) {  // Парні числа починаються з 2 і зростають на 2
        product *= i;  // Множимо кожне парне число на результат
    }

    // Виведення результату
    cout << "Product of even numbers from 1 to 20: " << product << endl;

    return 0;
}