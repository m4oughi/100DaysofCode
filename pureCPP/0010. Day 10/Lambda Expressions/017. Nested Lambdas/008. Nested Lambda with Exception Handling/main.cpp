#include <iostream>
#include <stdexcept>

int main() {
    auto outerLambda = []() {
        return []() {
            try {
                throw std::runtime_error("Exception in inner lambda!");
            } catch (const std::runtime_error& e) {
                std::cout << "Caught: " << e.what() << std::endl;
            }
        };
    };

    auto innerLambda = outerLambda();
    innerLambda(); // Outputs: Caught: Exception in inner lambda!

    return 0;
}
