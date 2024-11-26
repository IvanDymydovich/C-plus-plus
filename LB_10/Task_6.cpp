#include <iostream>
#include <cstdlib>  // For rand() and srand()


int main() {
    const int m = 4; // Number of rows
    const int n = 7; // Number of columns
    int arr[m][n];

    // Initialize the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Fill the array with random integers from 1 to 100
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            arr[i][j] = rand() % 100 + 1; // Random numbers between 1 and 100
        }
    }

    // Print the array
    std::cout << "Generated 2D array:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Find the minimum element and its position
    int minElement = arr[0][0];
    int minRow = 0;
    int minCol = 0;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (arr[i][j] < minElement) {
                minElement = arr[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }

    // Output the result
    std::cout << "Minimum element: " << minElement << std::endl;
    std::cout << "Position of the element: row " << minRow + 1 << ", column " << minCol + 1 << std::endl;

    return 0;
}

