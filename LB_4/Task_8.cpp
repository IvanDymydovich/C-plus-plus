#include <iostream>
#include <cmath> // для использования fabs
using namespace std;

int main() {
    int num1, num2;

    
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    //Ділимо 1 на кожне з введених чисел. Використовуємо static_cast<float>, щоб перетворити цілі числа в числа з плаваючою крапкою перед діленням.
    float result1 = 1.0f / static_cast<float>(num1);              
    float result2 = 1.0f / static_cast<float>(num2);

    
    const float epsilon = 0.000001;

    //Використовуємо fabs для отримання абсолютної різниці між результатами ділення і перевіряємо, чи менша вона, ніж epsilon
    if (fabs(result1 - result2) < epsilon) {
        cout << "Results are equal (by 0.000001 epsilon)" << endl;
    } else {
        cout << "Results are not equal (by 0.000001 epsilon)" << endl;
    }

    return 0;
}