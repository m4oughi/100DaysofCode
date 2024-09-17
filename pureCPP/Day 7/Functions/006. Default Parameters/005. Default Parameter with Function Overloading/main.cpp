#include <iostream>

// Overloaded function with default parameter
void printNumber(int number = 0);

int main() {
    printNumber();         // Uses default value
    printNumber(100);      // Custom argument
    return 0;
}

// Function definition with default parameter
void printNumber(int number) {
    std::cout << "Number: " << number << std::endl;
}
