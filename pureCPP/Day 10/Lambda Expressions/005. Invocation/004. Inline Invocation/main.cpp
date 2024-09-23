#include <iostream>

int main() {
    // Inline lambda invocation
    std::cout << "Result: " << [](int a, int b) {
        return a * b;
    }(5, 3) << std::endl; // Outputs: Result: 15
    return 0;
}
