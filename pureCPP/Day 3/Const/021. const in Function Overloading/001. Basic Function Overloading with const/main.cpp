#include <iostream>

void print(int value) {
    std::cout << "Non-const int: " << value << std::endl;
}

void print(const int value) {
    std::cout << "Const int: " << value << std::endl;
}

int main() {
    int a = 10;
    const int b = 20;

    print(a); // Calls print(int)
    print(b); // Calls print(const int)
}
