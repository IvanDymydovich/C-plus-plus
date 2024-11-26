#include <iostream>
#include <cstdlib>  // Для rand() і srand()

int main() {
    const int m = 3; // Number of rows
    const int n = 3; // Number of columns
    int arr[m][n];

    // Ініціалізуємо генератор випадкових чисел
    srand(static_cast<unsigned int>(time(0)));

    // Заповнюємо масив випадковими цілими числами від 1 до 100
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            arr[i][j] = rand() % 100 + 1; // Random numbers from 1 to 100
        }
    }

    // Виводимо масив
    std::cout << "Generated two-dimensional array:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Обчислюємо суму по головній діагоналі
    int mainDiagonalSum = 0;
    for (int i = 0; i < m; ++i) {
        mainDiagonalSum += arr[i][i]; // Main diagonal
    }

    // Обчислюємо суму по побічній діагоналі
    int secondaryDiagonalSum = 0;
    for (int i = 0; i < m; ++i) {
        secondaryDiagonalSum += arr[i][n - 1 - i]; // Secondary diagonal
    }

    // Виводимо результати
    std::cout << "Sum of the main diagonal: " << mainDiagonalSum << std::endl;
    std::cout << "Sum of the secondary diagonal: " << secondaryDiagonalSum << std::endl;

    return 0;
}
