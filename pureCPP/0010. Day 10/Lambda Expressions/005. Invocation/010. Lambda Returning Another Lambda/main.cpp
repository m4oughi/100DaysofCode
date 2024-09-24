#include <iostream>
#include <functional>

int main() {
    // Lambda returning another lambda
    auto createMultiplier = [](int factor) {
        return [factor](int n) {
            return n * factor;
        };
    };

    auto multiplier = createMultiplier(3);
    std::cout << "Result: " << multiplier(10) << std::endl; // Outputs: Result: 30
    return 0;
}
