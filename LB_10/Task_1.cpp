#include <iostream>
#include <cstdlib>  // Для rand() і srand()


int main() {
    const int m = 4; // Кількість рядків
    const int n = 3; // Кількість стовпців
    int arr[m][n];

    // Ініціалізуємо генератор випадкових чисел
    srand(static_cast<unsigned int>(time(0)));

    // Заповнюємо масив випадковими цілими числами від 0 до 99
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            arr[i][j] = rand() % 100; // Випадкові числа від 0 до 99
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

    // Підрахунок парних чисел у кожному рядку
    for (int i = 0; i < m; ++i) {
        int evenCount = 0; // Лічильник парних чисел
        for (int j = 0; j < n; ++j) {
            if (arr[i][j] % 2 == 0) { // Перевірка на парність
                evenCount++;
            }
        }
        // Виводимо результат для кожного рядка
        std::cout << "Number of even numbers in row " << i + 1 << ": " << evenCount << std::endl;
    }

    return 0;
}
