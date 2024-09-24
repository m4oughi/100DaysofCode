#include <iostream>

int main() {
    // Immediately invoked lambda expression (IILE)
    auto result = []() {
        return 42;
    }();

    std::cout << "Result: " << result << std::endl; // Outputs: 42
    return 0;
}
