#include <iostream>
using namespace std;

int main() {
    double x, y;

    cout << "Enter the coordinates of the point (x, y): ";
    cin >> x >> y;

    if (x >= 0 && x <= 3 && y >= 0 && y <= 1) {
        cout << "The point falls within the shaded area" << endl;
    } else {
        cout << "The point does not fall within the shaded area." << endl;
    }

    return 0;
}