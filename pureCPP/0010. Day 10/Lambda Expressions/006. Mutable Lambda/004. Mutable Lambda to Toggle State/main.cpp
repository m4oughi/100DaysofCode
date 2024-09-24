#include <iostream>

int main() {
    auto toggle = [state = false]() mutable {
        state = !state; // Toggles the internal state
        return state;
    };

    std::cout << "Toggle 1: " << toggle() << std::endl; // Outputs: Toggle 1: 1
    std::cout << "Toggle 2: " << toggle() << std::endl; // Outputs: Toggle 2: 0
    std::cout << "Toggle 3: " << toggle() << std::endl; // Outputs: Toggle 3: 1
    return 0;
}
