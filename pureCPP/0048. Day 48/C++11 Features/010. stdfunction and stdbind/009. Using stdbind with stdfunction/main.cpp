#include <iostream>
#include <functional>

void multiply(int a, int b) {
    std::cout << "Product: " << a * b << std::endl;
}

int main() {
    std::function<void(int)> multiplyBy10 = std::bind(multiply, 10, std::placeholders::_1);

    multiplyBy10(5);  // Output: 50

    return 0;
}
