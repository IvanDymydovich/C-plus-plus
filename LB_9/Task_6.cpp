#include <iostream>
#include <cstdlib>
#include <ctime>
#include <climits> // Для INT_MIN, если понадобится

using namespace std;

int main() {
    // Встановлюємо генератор випадкових чисел
    srand(static_cast<unsigned int>(time(0)));

    // Задаємо розмір масиву
    const int SIZE = 10;
    int arr[SIZE]; // Статичний масив

    // Генеруємо випадкові числа і заповнюємо масив
    for (int i = 0; i < SIZE; ++i) {
        arr[i] = rand() % 21 - 10; // Генеруємо числа в діапазоні від -10 до 10
    }

    // Виводимо згенерований масив
    cout << "Generated array: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << arr[i] << " "; // Виводимо кожен елемент масиву
    }
    cout << endl;

    // Шукаємо перший нульовий елемент
    int index = -1; // Ініціалізуємо індекс як -1 (не знайдено)
    for (int i = 0; i < SIZE; ++i) {
        if (arr[i] == 0) {
            index = i; // Зберігаємо індекс першого нульового елемента
            break; // Виходимо з циклу, знайшовши перший нуль
        }
    }

    // Виводимо результат
    if (index != -1) {
        cout << "The index of the first zero element is: " << index << endl;
    } else {
        cout << "The array does not contain any zero elements." << endl;
    }

    return 0;
}