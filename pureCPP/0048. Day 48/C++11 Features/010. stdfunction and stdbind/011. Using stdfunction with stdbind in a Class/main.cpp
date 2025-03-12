#include <iostream>
#include <functional>

class MathOperations {
public:
    int add(int a, int b) {
        return a + b;
    }
};

int main() {
    MathOperations math;
    std::function<int(int)> addTen = std::bind(&MathOperations::add, &math, 10, std::placeholders::_1);

    std::cout << "10 + 7 = " << addTen(7) << std::endl;  // Output: 17

    return 0;
}
