#include <iostream>

consteval int compileTimeOnly() {
    return 100;
}

int main() {
    // int runtimeValue = compileTimeOnly(); // Error: cannot be evaluated at runtime
    constexpr int value = compileTimeOnly(); // OK
    std::cout << "Value: " << value << '\n';
    return 0;
}
