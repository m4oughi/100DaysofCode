#include <iostream>

int getValue() {
    return 100;  // Returning Rvalue
}

int main() {
    int x = getValue();  // getValue() is an Rvalue
    std::cout << x;  // Prints 100

    return 0;
}