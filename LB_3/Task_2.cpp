
#include <iostream>

using namespace std;

int main() {
    int tramNumber;

    // Введення номера трамвая
    cout << "Enter the tram number (1-7): ";
    cin >> tramNumber;

    // Використовуємо оператор switch для вибору маршруту
    switch (tramNumber) {
        case 1:
            cout << "Tram 1: Starting stop - Lev Tolstoy Square, ending stop - Peremohy Square." << endl;
        break;
        case 2:
            cout << "Tram #2: Starting stop - Vokzalna, ending stop - Darnytsia." << endl;
        break;
        case 3:
            cout << "Tram #3: Starting stop - Kontraktova Square, ending stop - Lisova." << endl;
        break;
        case 4:
            cout << "Tram #4: Starting stop - Obolon, ending stop - Shevchenkivska." << endl;
        break;
        case 5:
            cout << "Tram No. 5: Starting stop - Lybidska, ending stop - Beresteyska." << endl;
        break;
        case 6:
            cout << "Tram #6: Starting stop - Troyeshchyna, ending stop - Vidradnyi." << endl;
        break;
        case 7:
            cout << "Tram #7: Starting stop - Pechersk, ending stop - Pozniaky." << endl;
        break;
        default:
            cout << "The tram number is incorrect. Enter a number between 1 and 7." << endl;
        break;
    }

    return 0;
}

