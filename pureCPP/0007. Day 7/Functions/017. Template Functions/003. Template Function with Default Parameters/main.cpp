#include <iostream>

template <typename T = int>
T multiply(T a, T b) {
    return a * b;
}

int main() {
    std::cout << "Multiplication (default int): " << multiply(5, 4) << std::endl;    // T defaults to int
    std::cout << "Multiplication (double): " << multiply(3.5, 2.5) << std::endl;    // Explicitly uses double

    return 0;
}
