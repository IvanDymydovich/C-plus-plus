#include <iostream>
#include <cstdlib>  // Для rand() і srand()


int main() {
    const int m = 6; // Number of rows
    const int n = 4; // Number of columns
    int arr[m][n];

    // Ініціалізуємо генератор випадкових чисел
    srand(static_cast<unsigned int>(time(0)));

    // Заповнюємо масив випадковими цілими числами від 0 до 99
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            arr[i][j] = rand() % 100; // Random numbers from 0 to 99
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

    // Підрахунок парних чисел у кожному стовпчику
    for (int j = 0; j < n; ++j) {
        int evenCount = 0; // Counter for even numbers
        for (int i = 0; i < m; ++i) {
            if (arr[i][j] % 2 == 0) { // Check for evenness
                evenCount++;
            }
        }
        // Виводимо результат для кожного стовпчика
        std::cout << "Number of even numbers in column " << j + 1 << ": " << evenCount << std::endl;
    }

    return 0;
}
