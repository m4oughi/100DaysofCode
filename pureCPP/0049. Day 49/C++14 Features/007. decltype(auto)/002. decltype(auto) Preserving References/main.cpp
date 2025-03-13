#include <iostream>

int x = 42;

decltype(auto) getXRef() {
    return (x); // Returns int&
}

int main() {
    getXRef() = 100; // Modifies 'x'
    std::cout << "x: " << x << std::endl; // Output: 100
    return 0;
}
