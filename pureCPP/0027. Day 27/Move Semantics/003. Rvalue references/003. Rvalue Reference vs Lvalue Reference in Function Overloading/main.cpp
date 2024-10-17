#include <iostream>

void process(int &lref) {
    std::cout << "Lvalue reference" << std::endl;
}

void process(int &&rref) {
    std::cout << "Rvalue reference" << std::endl;
}

int main() {
    int x = 5;
    process(x);    // Calls Lvalue reference version
    process(10);   // Calls Rvalue reference version
    return 0;
}
