#include <iostream>
#include <cstdlib>  // Для rand() і srand()


int main() {
    const int m = 5; // Number of rows
    const int n = 7; // Number of columns
    int arr[m][n];

    // Ініціалізуємо генератор випадкових чисел
    srand(static_cast<unsigned int>(time(0)));

    // Заповнюємо масив випадковими цілими числами від 1 до 50
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            arr[i][j] = rand() % 50 + 1; // Random numbers from 1 to 50
        }
    }

    // Виводимо масив
    std::cout << "Generated 2D array:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Обчислення та виведення суми елементів кожного рядка
    for (int i = 0; i < m; ++i) {
        int sum = 0; // Sum counter
        for (int j = 0; j < n; ++j) {
            sum += arr[i][j]; // Add element value to sum
        }
        // Виводимо результат для кожного рядка
        std::cout << "Sum of elements in row " << i + 1 << ": " << sum << std::endl;
    }

    return 0;
}
