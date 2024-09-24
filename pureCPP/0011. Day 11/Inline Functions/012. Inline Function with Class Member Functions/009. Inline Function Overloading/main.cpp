#include <iostream>

class Math {
public:
    // Inline member function overloading
    inline int multiply(int a, int b) {
        return a * b;
    }

    inline double multiply(double a, double b) {
        return a * b;
    }
};

int main() {
    Math math;
    std::cout << "Integer Product: " << math.multiply(3, 4) << std::endl; // Output: Integer Product: 12
    std::cout << "Double Product: " << math.multiply(2.5, 3.5) << std::endl; // Output: Double Product: 8.75
    return 0;
}
