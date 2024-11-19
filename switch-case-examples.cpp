#include <iostream>

int main() {
    // Use a for loop to print the desired numbers
    for (int i = 12; i <= 28; i += 2) {
        std::cout << i;
        
        // Add a comma after each number except the last one
        if (i < 28) {
            std::cout << ", ";
        }
    }

    // End with a newline
    std::cout << std::endl;

    return 0;
}
