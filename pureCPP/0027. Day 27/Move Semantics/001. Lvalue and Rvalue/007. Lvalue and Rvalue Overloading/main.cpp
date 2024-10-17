#include <iostream>

void process(int &l) {
    std::cout << "Lvalue called" << std::endl;
}

void process(int &&r) {
    std::cout << "Rvalue called" << std::endl;
}

int main() {
    int x = 5;
    process(x);   // Calls Lvalue version
    process(10);  // Calls Rvalue version

    return 0;
}
