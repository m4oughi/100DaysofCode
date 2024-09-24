#include <iostream>

int main() {
    int num = 100;
    auto outerLambda = [num]() mutable {
        auto innerLambda = [num]() mutable {
            num += 10; // Modifies the inner copy
            std::cout << "Inner captured num: " << num << std::endl;
        };
        innerLambda();
        std::cout << "Outer captured num: " << num << std::endl;
    };

    outerLambda(); // Outputs: Inner captured num: 110, Outer captured num: 100
    return 0;
}
