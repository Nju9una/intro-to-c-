#include <iostream>
using namespace std;

int main()
{
    string myName, favMovie, favMeal;

    // Prompt user for their full name
    cout << "Please enter your full name: ";
    getline(cin, myName);

    // Prompt user for their favourite movie
    cout << "What is your favourite movie? ";
    getline(cin, favMovie);

    // Prompt user for their favourite meal
    cout << "What is your favourite meal? ";
    getline(cin, favMeal);

    // Display the user's details
    cout << "Full Name: " << myName << endl;
    cout << "Favourite Movie: " << favMovie << endl;
    cout << "Favourite Meal: " << favMeal << endl;

    return 0;
}
