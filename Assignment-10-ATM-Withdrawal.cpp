#include <iostream>
using namespace std;

int main() {
    double accountBalance, withdrawalAmount;
    double dailyLimit = 5000.0;

    cout << "Enter account balance: ";
    cin >> accountBalance;
    cout << "Enter withdrawal amount: ";
    cin >> withdrawalAmount;

    if (withdrawalAmount > accountBalance) {
        cout << "Insufficient funds." << endl;
    } else if (withdrawalAmount > dailyLimit) {
        cout << "Transaction exceeds daily limit." << endl;
    } else {
        accountBalance -= withdrawalAmount;
        cout << "Transaction successful. Remaining balance: " << accountBalance << endl;
    }

    return 0;
}
