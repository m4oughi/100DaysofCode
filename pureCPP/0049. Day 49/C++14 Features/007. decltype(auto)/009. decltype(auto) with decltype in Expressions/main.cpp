#include <iostream>

int x = 100;

decltype(auto) getXExpression() {
    return (x + 10); // Deduces 'int'
}

int main() {
    std::cout << "getXExpression(): " << getXExpression() << std::endl; // Output: 110
    return 0;
}
