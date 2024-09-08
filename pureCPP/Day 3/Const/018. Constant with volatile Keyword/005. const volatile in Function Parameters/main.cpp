#include <iostream>

void printValue(const volatile int& value) {
    std::cout << value << std::endl; // Prints the value
}

int main() {
    const volatile int data = 50;
    printValue(data);
}
