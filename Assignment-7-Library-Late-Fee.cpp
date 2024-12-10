#include <iostream>
using namespace std;

int main() {
    int daysLate;
    string bookType;
    double fine = 0.0;

    cout << "Enter the number of days late: ";
    cin >> daysLate;
    cout << "Enter the type of book (regular/children/reference): ";
    cin >> bookType;

    if (bookType == "regular") {
        fine = daysLate * 2.0;
    } else if (bookType == "children") {
        fine = daysLate * 1.0;
    } else if (bookType == "reference") {
        fine = daysLate * 0.5;
    } else {
        cout << "Invalid book type." << endl;
        return 0;
    }

    cout << "The fine is: " << fine << endl;

    return 0;
}
