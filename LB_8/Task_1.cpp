#include <iostream>
#include <algorithm> // Для std::sort
#include <cstdlib>  // Для rand() і srand()
#include <ctime>    // Для time()

int main() {
    const int m = 12; // Розмір масиву
    int arr[m];

    // Ініціалізуємо генератор випадкових чисел
    srand(static_cast<unsigned int>(time(0)));

    // Заповнюємо масив випадковими цілими числами
    for (int i = 0; i < m; ++i) {
        arr[i] = rand() % 100; // Випадкові числа від 0 до 99
    }

    // Виводимо масив до сортування
    std::cout << "Array to be sorted: ";
    for (int i = 0; i < m; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Сортуємо масив у зростаючому порядку
    std::sort(arr, arr + m);
    std::cout << "Array in ascending order: ";
    for (int i = 0; i < m; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Сортуємо масив у спадному порядку
    std::sort(arr, arr + m, std::greater<int>());
    std::cout << "The array is in descending order: ";
    for (int i = 0; i < m; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
