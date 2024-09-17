#include <iostream>

int main() {
    auto generateMultiplier = [](int factor) {
        return [factor](int value) { return value * factor; };  // Returns a lambda
    };

    auto multiplier = generateMultiplier(5);
    std::cout << "5 times 3 is: " << multiplier(3) << std::endl;
    return 0;
}
