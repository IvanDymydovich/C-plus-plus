#include <iostream>
using namespace std;

// Структура для зберігання часу
struct Time {
    int hours;   // години
    int minutes; // хвилини
};

// Функція для нормалізації часу
void normalizeTime(int &hours, int &minutes) {
    if (minutes >= 60) {
        hours += minutes / 60; // додати години
        minutes %= 60;         // залишити тільки хвилини
    }
    if (hours >= 24) {
        hours %= 24;           // залишити години в межах 0-23
    }
}

// Функція для обчислення тривалості між двома часами
Time calculateDuration(Time startTime, Time endTime) {
    Time duration; // тривалість

    // Перевірка, чи закінчення події менше початку
    if (endTime.hours < startTime.hours || (endTime.hours == startTime.hours && endTime.minutes < startTime.minutes)) {
        // Додаємо 24 години, якщо завершальний час менше початкового
        endTime.hours += 24;
    }

    // Обчислюємо різницю
    duration.hours = endTime.hours - startTime.hours;
    duration.minutes = endTime.minutes - startTime.minutes;

    // Нормалізуємо результати
    if (duration.minutes < 0) {
        duration.minutes += 60; // додаємо 60 хвилин
        duration.hours--;        // зменшуємо години
    }

    return duration;
}

int main() {
    Time startTime, endTime; // початковий та кінцевий час

    // Введення значень для початку події
    cout << "Enter start time (hours minutes): ";
    cin >> startTime.hours >> startTime.minutes;

    // Перевірка правильності введених значень
    if (startTime.hours < 0 || startTime.hours >= 24 || startTime.minutes < 0 || startTime.minutes >= 60) {
        cout << "Invalid input for start time! Please enter hours between 0-23 and minutes between 0-59." << endl;
        return 1; // вихід з програми з кодом помилки
    }

    // Введення значень для завершення події
    cout << "Enter end time (hours minutes): ";
    cin >> endTime.hours >> endTime.minutes;

    // Перевірка правильності введених значень
    if (endTime.hours < 0 || endTime.hours >= 24 || endTime.minutes < 0 || endTime.minutes >= 60) {
        cout << "Invalid input for end time! Please enter hours between 0-23 and minutes between 0-59." << endl;
        return 1; // вихід з програми з кодом помилки
    }

    // Обчислюємо тривалість події
    Time duration = calculateDuration(startTime, endTime);

    // Виводимо тривалість у форматі ГГ:ХХ
    cout << "Duration: " << duration.hours << ":" << (duration.minutes < 10 ? "0" : "") << duration.minutes << endl;

    return 0;
}