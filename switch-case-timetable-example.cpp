#include <iostream>
using namespace std;

int main() {
    int day;

    // Display menu for user to select a day
    cout << "Enter the day of the week (1 for Monday, 2 for Tuesday, ..., 5 for Friday): ";
    cin >> day;

    // Use switch to handle each day
    switch (day) {
        case 1: // Monday
            cout << "Monday Timetable:\n";
            cout << "1. BBIT 1106: Math for Business\n";
            cout << "2. BBIT 1102: Intro to Programs\n";
            break;
        case 2: // Tuesday
            cout << "Tuesday Timetable:\n";
            cout << "1. BBIT 1102: Intro to Programs\n";
            cout << "2. BBIT 1104: Intro to Ethics\n";
            break;
        case 3: // Wednesday
            cout << "Wednesday Timetable:\n";
            cout << "1. BBIT 1106: Math for Business\n";
            cout << "2. BBIT 1104: Theology\n";
            cout << "3. BBIT 1101: Fundamentals of IT\n";
            break;
        case 4: // Thursday
            cout << "Thursday Timetable:\n";
            cout << "1. BBIT 1105: Accounting\n";
            cout << "2. BBIT 1101: Fundamentals of IT\n";
            break;
        case 5: // Friday
            cout << "Friday Timetable:\n";
            cout << "1. BBIT 1103: Business Computing\n";
            break;
        default: // Invalid input
            cout << "Invalid day entered! Please enter a number between 1 and 5.\n";
            break;
    }

    return 0;
}
