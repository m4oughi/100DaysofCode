#include <iostream>

class Math {
public:
    static int multiply(int a, int b) { return a * b; }
};

int main() {
    int (*funcPtr)(int, int) = &Math::multiply;  // Function pointer to static member
    std::cout << "Multiplication: " << funcPtr(4, 5) << std::endl;
    return 0;
}
