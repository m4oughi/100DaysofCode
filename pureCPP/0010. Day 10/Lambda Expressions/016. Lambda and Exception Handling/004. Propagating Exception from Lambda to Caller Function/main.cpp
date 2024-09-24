#include <iostream>
#include <stdexcept>

void callLambda() {
    auto lambda = []() {
        throw std::runtime_error("Exception from lambda!");
    };

    lambda(); // The exception will propagate to the caller
}

int main() {
    try {
        callLambda(); // Exception propagates to this point
    } catch (const std::runtime_error& e) {
        std::cout << "Caught exception: " << e.what() << std::endl; // Outputs: Caught exception: Exception from lambda!
    }

    return 0;
}
