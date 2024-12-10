#include <iostream>
#include <string>
using namespace std;

bool fredLoanCalculator(int age, double balance, string crb, int months) {
    if (age > 22 && balance > 50000 && crb == "good" && months > 6) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int age, months;
    double balance;
    string crb;

    cout << "Enter age: ";
    cin >> age;
    cout << "Enter bank balance: ";
    cin >> balance;
    cout << "Enter CRB status (good/bad): ";
    cin >> crb;
    cout << "Enter months as customer: ";
    cin >> months;

    if (fredLoanCalculator(age, balance, crb, months)) {
        cout << "Loan approved!" << endl;
    } else {
        cout << "Loan denied!" << endl;
    }

    return 0;
}
