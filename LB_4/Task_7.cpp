#include <iostream>
#include <iomanip>  // для настройки формата вывода
using namespace std;

int main() {
    float num1, num2, num3, num4, num5;

    // Ввод значений
    cout << "Enter five float numbers: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    cout << "Output:" << endl;
    cout << num1 << endl                                  // Вивід без зміе
         << fixed << setprecision(2) << num2 << endl     // 2 знаки після коми
         << fixed << setprecision(6) << num3 << endl     // 1 знак після коми 
         << fixed << setprecision(2) << num4 << endl    
         << fixed << setprecision(0) << num5 << endl;    

    return 0;
}