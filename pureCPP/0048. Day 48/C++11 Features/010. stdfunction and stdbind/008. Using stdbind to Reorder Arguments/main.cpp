#include <iostream>
#include <functional>

void printValues(int a, int b, int c) {
    std::cout << "a: " << a << ", b: " << b << ", c: " << c << std::endl;
}

int main() {
    auto reorderArgs = std::bind(printValues, std::placeholders::_3, std::placeholders::_1, std::placeholders::_2);
    
    reorderArgs(1, 2, 3);  // Output: a: 3, b: 1, c: 2

    return 0;
}
