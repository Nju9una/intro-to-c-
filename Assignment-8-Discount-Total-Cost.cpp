#include <iostream>
using namespace std;

int main() {
    double purchaseAmount, discount = 0.0;

    cout << "Enter the purchase amount: ";
    cin >> purchaseAmount;

    if (purchaseAmount > 1000) {
        discount = 0.2;
    } else if (purchaseAmount > 500) {
        discount = 0.1;
    } else if (purchaseAmount > 100) {
        discount = 0.05;
    }

    double totalCost = purchaseAmount - (purchaseAmount * discount);
    cout << "Total cost after discount: " << totalCost << endl;

    return 0;
}
