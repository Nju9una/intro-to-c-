#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    bool boolVar1 = true, boolVar2 = false;

    // Prompt user for input
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // ***** Arithmetic Operators *****
    cout << "\nArithmetic Operators:" << endl;

    // Addition
    cout << "Sum of " << num1 << " + " << num2 << " = " << num1 + num2 << endl;

    // Subtraction
    cout << "Difference of " << num1 << " - " << num2 << " = " << num1 - num2 << endl;

    // Multiplication
    cout << "Product of " << num1 << " * " << num2 << " = " << num1 * num2 << endl;

    // Division
    if (num2 != 0) {
        cout << "Division of " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    } else {
        cout << "Division by zero is not allowed." << endl;
    }

    // Modulus operator '%'
    if (num2 != 0) {
        cout << "Modulus of " << num1 << " % " << num2 << " = " << num1 % num2 << endl;
    }

    // Increment operator '++'
    cout << "Increment num1 by 1: " << ++num1 << endl;

    // Decrement operator '--'
    cout << "Decrement num1 by 1: " << --num1 << endl;

    // ***** Comparison Operators *****
    cout << "\nComparison Operators:" << endl;

    // Greater than '>'
    cout << num1 << " > " << num2 << " is " << (num1 > num2) << endl;

    // Less than '<'
    cout << num1 << " < " << num2 << " is " << (num1 < num2) << endl;

    // Equal to '=='
    cout << num1 << " == " << num2 << " is " << (num1 == num2) << endl;

    // Not equal to '!='
    cout << num1 << " != " << num2 << " is " << (num1 != num2) << endl;

    // Greater than or equal to '>='
    cout << num1 << " >= " << num2 << " is " << (num1 >= num2) << endl;

    // Less than or equal to '<='
    cout << num1 << " <= " << num2 << " is " << (num1 <= num2) << endl;

    // ***** Boolean Operators *****
    cout << "\nBoolean Operators:" << endl;

    // Boolean operator "&&"
    cout << boolVar1 << " && " << boolVar2 << " is " << (boolVar1 && boolVar2) << endl;

    // Boolean operator "||"
    cout << boolVar1 << " || " << boolVar2 << " is " << (boolVar1 || boolVar2) << endl;

    // Boolean operator "!"
    cout << "!" << boolVar1 << " is " << (!boolVar1) << endl;
      // ****POINTER OPERATIONS****
    cout << "\nPointer Operations:" << endl;
    
    // Declare a pointer
    int *ptr = nullptr;

    // Assign a value to the pointer
    ptr = &num1;

    // Output the address of num1
    cout << "Address of num1 = " << &num1 << endl;

    // Dereference the pointer to get the value at the memory location
    cout << "Value at memory location pointed by ptr = " << *ptr << endl;

    return 0;
}


   