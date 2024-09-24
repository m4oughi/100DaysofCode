#include <iostream>

// Static inline function to get a constant value
static inline int getConstantValue() {
    return 42;
}

int main() {
    std::cout << "Constant Value: " << getConstantValue() << std::endl; // Output: Constant Value: 42
    return 0;
}
