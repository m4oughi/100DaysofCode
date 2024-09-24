#include <iostream>

// Function declaration passing by reference
void increment(int& number);

int main() {
    int x = 5;
    increment(x);  // Function call with reference
    std::cout << "Incremented value: " << x << std::endl;
    return 0;
}

// Function definition passing by reference
void increment(int& number) {
    number++;  // Changes the original variable
}
