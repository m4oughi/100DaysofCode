#include <iostream>

// Overloaded functions with different number of parameters
void display() {
    std::cout << "No arguments" << std::endl;
}

void display(int a) {
    std::cout << "Integer: " << a << std::endl;
}

void display(int a, double b) {
    std::cout << "Integer: " << a << ", Double: " << b << std::endl;
}

int main() {
    display();              // Calls display()
    display(10);            // Calls display(int)
    display(10, 3.14);      // Calls display(int, double)
    return 0;
}
