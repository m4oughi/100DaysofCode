#include <iostream>

int x = 10;

decltype(auto) getValue() {
    return (x); // Preserves type and reference
}

int main() {
    getValue() = 20; // Modifies x
    std::cout << "x: " << x << std::endl;
    return 0;
}
