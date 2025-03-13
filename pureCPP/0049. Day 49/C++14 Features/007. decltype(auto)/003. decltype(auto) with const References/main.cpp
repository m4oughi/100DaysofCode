#include <iostream>

const int y = 50;

decltype(auto) getConstY() {
    return y; // Deduces 'const int'
}

int main() {
    std::cout << "getConstY(): " << getConstY() << std::endl; // Output: 50
    return 0;
}
