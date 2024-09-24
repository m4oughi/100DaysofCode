#include <iostream>

int main() {
    // Lambda with void return type
    auto printMessage = []() -> void {
        std::cout << "This lambda returns void." << std::endl;
    };
    printMessage(); // Outputs: This lambda returns void.
    return 0;
}
