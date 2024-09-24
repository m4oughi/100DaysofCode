#include <iostream>

int main() {
    int counter = 0;
    auto outerLambda = [&counter]() {
        auto innerLambda = [&counter]() {
            counter += 5; // Modifies the reference captured by the outer lambda
            std::cout << "Inner counter: " << counter << std::endl;
        };
        innerLambda();
        counter += 10;
        std::cout << "Outer counter: " << counter << std::endl;
    };

    outerLambda(); // Outputs: Inner counter: 5, Outer counter: 15
    std::cout << "Final counter: " << counter << std::endl; // Outputs: Final counter: 15
    return 0;
}
