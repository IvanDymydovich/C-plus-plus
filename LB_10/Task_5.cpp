#include <iostream>
#include <cstdlib>  // For rand() and srand()


int main() {
    const int m = 3; // Number of rows
    const int n = 4; // Number of columns
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
    std::cout << "Generated 2D array:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Знаходимо максимальний елемент і його позицію
    int maxElement = arr[0][0];
    int maxRow = 0;
    int maxCol = 0;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (arr[i][j] > maxElement) {
                maxElement = arr[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    // Виводимо результат
    std::cout << "Maximum element: " << maxElement << std::endl;
    std::cout << "Position of the element: row " << maxRow + 1 << ", column " << maxCol + 1 << std::endl;

    return 0;
}
