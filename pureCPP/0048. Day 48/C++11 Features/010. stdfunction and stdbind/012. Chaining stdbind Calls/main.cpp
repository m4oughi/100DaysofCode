#include <iostream>
#include <functional>

int multiply(int a, int b) {
    return a * b;
}

int main() {
    auto multiplyBy2 = std::bind(multiply, 2, std::placeholders::_1);
    auto multiplyBy4 = std::bind(multiply, 2, multiplyBy2);

    std::cout << "4 * 3 = " << multiplyBy4(3) << std::endl;  // Output: 12

    return 0;
}
