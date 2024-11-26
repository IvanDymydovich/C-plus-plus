// Завдання 1
// Варіант 6

#include <iostream>

using namespace std;

int main() {
    int N;

    // Введення тризначного числа N
    cout << "Enter a three-digit number: ";
    cin >> N;

    // Перевірка, чи число тризначне
    if (N < 100 || N > 999) {
        cout << "Error: The number you entered is not a three-digit number." << endl;
        return 1; // Завершуємо програму, якщо число не тризначне
    }

    // Виділяємо сотні, десятки та одиниці
    int hundreds = N / 100;         // Сотні
    int tens = (N / 10) % 10;       // Десятки
    int ones = N % 10;              // Одиниці

    // Знаходимо кількість парних цифр
    int evenCount = 0;

    if (hundreds % 2 == 0) evenCount++;
    if (tens % 2 == 0) evenCount++;
    if (ones % 2 == 0) evenCount++;

    // Виведення результату
    cout << "The number of even digits: " << evenCount << endl;

    return 0;
}
