#include <iostream>

int a = 10;

int& getA() {
    return a;
}

decltype(auto) getADecltype() {
    return getA(); // Deduces 'int&'
}

int main() {
    getADecltype() = 20; // Modifies 'a'
    std::cout << "a: " << a << std::endl; // Output: 20
    return 0;
}
