#include <iostream>

int main() {
    auto noThrowLambda = []() noexcept {
        std::cout << "Lambda marked noexcept." << std::endl;
    };

    auto mayThrowLambda = []() {
        std::cout << "Lambda may throw." << std::endl;
        throw std::runtime_error("Exception in lambda!");
    };

    noThrowLambda();

    try {
        mayThrowLambda();
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}
