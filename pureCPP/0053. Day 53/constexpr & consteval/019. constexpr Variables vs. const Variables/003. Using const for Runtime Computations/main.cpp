#include <iostream>

int calculate() {
    return 20 + 5;  // Computation at runtime
}

int main() {
    const int runtimeComputation = calculate();  // Computed at runtime
    std::cout << "const variable from runtime computation: " << runtimeComputation << '\n';
}
