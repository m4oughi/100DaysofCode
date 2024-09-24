#include <iostream>

// Overloaded functions with different parameter types
void print(int number) {
    std::cout << "Integer: " << number << std::endl;
}

void print(double number) {
    std::cout << "Double: " << number << std::endl;
}

int main() {
    print(10);          // Calls print(int)
    print(3.14);        // Calls print(double)
    return 0;
}
