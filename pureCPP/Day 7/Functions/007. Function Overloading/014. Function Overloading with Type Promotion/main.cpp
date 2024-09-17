#include <iostream>

// Overloaded functions with type promotion
void show(char a) {
    std::cout << "Character: " << a << std::endl;
}

void show(int a) {
    std::cout << "Integer: " << a << std::endl;
}

int main() {
    show('A');    // Calls show(char)
    show(65);     // Calls show(int), even though 'A' can be promoted to int
    return 0;
}
