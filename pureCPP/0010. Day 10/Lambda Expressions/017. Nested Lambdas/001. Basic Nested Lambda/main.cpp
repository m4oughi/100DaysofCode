#include <iostream>

int main() {
    auto outerLambda = []() {
        auto innerLambda = []() {
            std::cout << "Hello from the inner lambda!" << std::endl;
        };
        innerLambda(); // Outputs: Hello from the inner lambda!
    };

    outerLambda(); // Calls the outer lambda, which calls the inner lambda
    return 0;
}
