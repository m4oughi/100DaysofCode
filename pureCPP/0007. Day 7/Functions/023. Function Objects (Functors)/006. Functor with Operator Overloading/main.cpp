#include <iostream>

class Subtract {
public:
    int operator()(int a, int b) const {
        return a - b;
    }
};

class Multiply {
public:
    int operator()(int a, int b) const {
        return a * b;
    }
};

int main() {
    Subtract subtract;
    Multiply multiply;

    std::cout << "10 - 4 = " << subtract(10, 4) << std::endl;  // Output: 10 - 4 = 6
    std::cout << "3 * 4 = " << multiply(3, 4) << std::endl;    // Output: 3 * 4 = 12

    return 0;
}
