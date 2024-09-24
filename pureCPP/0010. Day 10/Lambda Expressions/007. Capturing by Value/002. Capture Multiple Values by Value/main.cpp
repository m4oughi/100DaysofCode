#include <iostream>

int main() {
    int a = 2, b = 3;
    auto multiply = [a, b]() {
        return a * b;
    };

    std::cout << "Multiplication result: " << multiply() << std::endl; // Outputs: Multiplication result: 6
    return 0;
}
