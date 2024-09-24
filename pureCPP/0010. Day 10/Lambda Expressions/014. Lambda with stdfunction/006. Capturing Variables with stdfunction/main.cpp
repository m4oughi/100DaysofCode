#include <iostream>
#include <functional>

int main() {
    int factor = 10;

    std::function<int(int)> multiply = [factor](int value) {
        return value * factor;
    };

    std::cout << "10 times 3: " << multiply(3) << std::endl; // Outputs: 10 times 3: 30

    return 0;
}
