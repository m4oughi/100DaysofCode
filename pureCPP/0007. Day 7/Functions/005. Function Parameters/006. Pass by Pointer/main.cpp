#include <iostream>

// Function declaration passing by pointer
void changeValue(int* number);

int main() {
    int x = 5;
    changeValue(&x);  // Function call with pointer
    std::cout << "Changed value: " << x << std::endl;
    return 0;
}

// Function definition passing by pointer
void changeValue(int* number) {
    *number = 10;  // Changes the value through the pointer
}
