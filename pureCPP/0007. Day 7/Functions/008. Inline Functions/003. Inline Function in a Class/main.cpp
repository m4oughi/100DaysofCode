#include <iostream>

class Math {
public:
    inline int multiply(int a, int b) {
        return a * b;
    }
};

int main() {
    Math math;
    std::cout << "Multiplication of 3 and 4: " << math.multiply(3, 4) << std::endl;
    return 0;
}
