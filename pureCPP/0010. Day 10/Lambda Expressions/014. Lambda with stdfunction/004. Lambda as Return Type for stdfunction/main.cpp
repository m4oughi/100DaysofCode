#include <iostream>
#include <functional>

std::function<int(int, int)> getOperation(char op) {
    if (op == '+') {
        return [](int a, int b) {
            return a + b;
        };
    } else if (op == '-') {
        return [](int a, int b) {
            return a - b;
        };
    } else {
        return [](int, int) {
            return 0;
        };
    }
}

int main() {
    auto add = getOperation('+');
    auto subtract = getOperation('-');

    std::cout << "Add: " << add(10, 5) << std::endl;       // Outputs: Add: 15
    std::cout << "Subtract: " << subtract(10, 5) << std::endl; // Outputs: Subtract: 5

    return 0;
}
