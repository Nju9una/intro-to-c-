#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;
    double radius, length, width, base, height;

    cout << "Menu:" << endl;
    cout << "1. Calculate area of a circle" << endl;
    cout << "2. Calculate area of a rectangle" << endl;
    cout << "3. Calculate area of a triangle" << endl;
    cout << "4. Quit" << endl;
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter radius: ";
            cin >> radius;
            cout << "Area of circle: " << 3.14 * radius * radius << endl;
            break;
        case 2:
            cout << "Enter length and width: ";
            cin >> length >> width;
            cout << "Area of rectangle: " << length * width << endl;
            break;
        case 3:
            cout << "Enter base and height: ";
            cin >> base >> height;
            cout << "Area of triangle: " << 0.5 * base * height << endl;
            break;
        case 4:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}
