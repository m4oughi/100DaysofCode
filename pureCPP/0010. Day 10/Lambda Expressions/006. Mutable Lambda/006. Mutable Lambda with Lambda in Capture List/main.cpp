#include <iostream>

int main() {
    auto outerLambda = [count = 0, multiplier = [](int a) { return a * 2; }]() mutable {
        count += 1;
        return multiplier(count); // Uses captured lambda
    };

    std::cout << "Result 1: " << outerLambda() << std::endl; // Outputs: Result 1: 2
    std::cout << "Result 2: " << outerLambda() << std::endl; // Outputs: Result 2: 4
    std::cout << "Result 3: " << outerLambda() << std::endl; // Outputs: Result 3: 6
    return 0;
}
