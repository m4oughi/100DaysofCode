#include <iostream>
#include <functional>

int add(int a, int b) {
    return a + b;
}

int main() {
    auto addFive = std::bind(add, 5, std::placeholders::_1);
    
    std::cout << "5 + 10 = " << addFive(10) << std::endl;  // Output: 15

    return 0;
}
