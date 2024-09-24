#include <iostream>

// Overloaded functions with reference parameters
void increment(int& number) {
    number++;
    std::cout << "Incremented (by ref): " << number << std::endl;
}

void increment(int* number) {
    (*number)++;
    std::cout << "Incremented (by pointer): " << *number << std::endl;
}

int main() {
    int x = 5;
    increment(x);          // Calls version with reference
    increment(&x);         // Calls version with pointer
    return 0;
}
