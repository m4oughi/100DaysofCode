#include <iostream>
#include <functional>

void applyFunction(std::function<int(int)> func, int value) {
    std::cout << "Result: " << func(value) << std::endl;
}

int main() {
    auto multiply = [](int x) {
        return [x](int y) {
            return x * y;
        };
    };

    applyFunction(multiply(5), 3); // Outputs: Result: 15

    return 0;
}
