#include <iostream>
#include <stdexcept>

int main() {
    auto lambda = []() noexcept {
        // std::cout << "This lambda cannot throw exceptions." << std::endl;
        // throw std::runtime_error("This will not compile!"); // Uncommenting this will result in a compile-time error.
    };

    lambda(); // Uncommenting the throw line would cause a compilation error
    return 0;
}
