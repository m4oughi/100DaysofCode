#include <iostream>

int main() {
    int counter = 0;

    auto outerLambda = [&counter]() {
        auto innerLambda = [&counter]() {
            counter++;
            std::cout << "Inner counter: " << counter << std::endl;
        };
        innerLambda();
        std::cout << "Outer counter: " << counter << std::endl;
    };

    outerLambda(); // Outputs: Inner counter: 1, Outer counter: 1
    outerLambda(); // Outputs: Inner counter: 2, Outer counter: 2
    return 0;
}
