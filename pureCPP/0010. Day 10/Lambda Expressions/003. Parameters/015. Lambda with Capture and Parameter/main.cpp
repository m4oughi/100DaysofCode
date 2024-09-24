#include <iostream>

int main() {
    int a = 10;
    // Lambda capturing 'a' by value and accepting another parameter 'b'
    auto multiply = [a](int b) {
        return a * b;
    };
    std::cout << "Multiplication result: " << multiply(5) << std::endl; // Outputs 50
    return 0;
}
