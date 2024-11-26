#include <iostream>
#include <algorithm> // Для std::max_element

int main() {
    const int size = 10; // Розмір масиву
    int arr[size] = {3, -1, -2, 5, 4, -3, 6, -7, 1, 2}; // Приклад масиву

    // Виводимо масив до змінення
    std::cout << "The array to be changed: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Знаходимо перший максимальний елемент
    int* maxPtr = std::max_element(arr, arr + size);
    int maxIndex = maxPtr - arr; // Індекс першого максимального елемента

    // Замінюємо від'ємні елементи нулями перед першим максимальним елементом
    for (int i = 0; i < maxIndex; ++i) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }

    // Виводимо масив після зміни
    std::cout << "The array after the change: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}