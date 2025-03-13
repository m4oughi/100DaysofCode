#include <iostream>

constexpr int square(int x) {
    return x * x;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num; // Dynamic input

    std::cout << "Square: " << square(num) << std::endl; // Computed at runtime if input is not known at compile-time
    return 0;
}
