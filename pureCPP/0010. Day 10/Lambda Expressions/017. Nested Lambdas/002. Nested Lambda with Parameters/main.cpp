#include <iostream>

int main() {
    auto multiply = [](int x) {
        return [x](int y) {
            return x * y;
        };
    };

    auto multiplyBy5 = multiply(5);
    std::cout << "5 * 4 = " << multiplyBy5(4) << std::endl; // Outputs: 5 * 4 = 20

    return 0;
}
