#include <iostream>

int x = 42;

decltype(auto) getX() {
    return x; // Deduces 'int'
}

int main() {
    std::cout << "getX(): " << getX() << std::endl; // Output: 42
    return 0;
}
