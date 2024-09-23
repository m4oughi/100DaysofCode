#include <iostream>

int main() {
    int a = 1, b = 2;
    auto outerLambda = [&, a]() {
        auto innerLambda = [&]() {
            b = a + 5; // Modify captured reference and access a captured by value
        };
        innerLambda();
    };

    outerLambda();
    std::cout << "Modified b: " << b << std::endl; // Outputs: Modified b: 6
    return 0;
}
