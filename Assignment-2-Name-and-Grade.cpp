#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, course;
    int score;

    cout << "Enter full name: ";
    getline(cin, name);
    cout << "Enter course: ";
    getline(cin, course);
    cout << "Enter score: ";
    cin >> score;

    if (score >= 70) {
        cout << "Grade: A" << endl;
    } else if (score >= 60) {
        cout << "Grade: B" << endl;
    } else if (score >= 50) {
        cout << "Grade: C" << endl;
    } else if (score >= 40) {
        cout << "Grade: D" << endl;
    } else if (score >= 0) {
        cout << "Grade: F" << endl;
    } else {
        cout << "Invalid score" << endl;
    }

    return 0;
}
