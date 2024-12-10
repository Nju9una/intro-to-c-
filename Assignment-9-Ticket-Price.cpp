#include <iostream>
using namespace std;

int main() {
    int age;
    string movieType;
    double ticketPrice = 0.0;

    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter the type of movie (regular/3D): ";
    cin >> movieType;

    if (movieType == "regular") {
        if (age < 12) {
            ticketPrice = 5.0;
        } else if (age < 60) {
            ticketPrice = 10.0;
        } else {
            ticketPrice = 7.0;
        }
    } else if (movieType == "3D") {
        if (age < 12) {
            ticketPrice = 8.0;
        } else if (age < 60) {
            ticketPrice = 15.0;
        } else {
            ticketPrice = 10.0;
        }
    } else {
        cout << "Invalid movie type." << endl;
        return 0;
    }

    cout << "The ticket price is: " << ticketPrice << endl;

    return 0;
}
