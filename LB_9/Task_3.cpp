#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm> // Для std::swap

using namespace std;

int main() {
    // Встановлюємо генератор випадкових чисел
    srand(static_cast<unsigned int>(time(0)));

    // Задаємо розмір масиву
    const int SIZE = 10;
    int arr[SIZE]; // Статичний масив

    // Генеруємо випадкові числа і заповнюємо масив
    for (int i = 0; i < SIZE; ++i) {
        arr[i] = rand() % 100; // Генеруємо числа від 0 до 99
    }

    // Виводимо початковий масив
    cout << "Initial array: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << arr[i] << " "; // Виводимо кожен елемент масиву
    }
    cout << endl;

    // Знаходимо індекси найбільшого і найменшого елементів
    int maxIndex = 0;
    int minIndex = 0;

    for (int i = 1; i < SIZE; ++i) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    // Змінюємо місцями найбільший і найменший елементи
    swap(arr[maxIndex], arr[minIndex]);

    // Виводимо змінений масив
    cout << "Modified array: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << arr[i] << " "; // Виводимо кожен елемент масиву
    }
    cout << endl;

    return 0;
}