#include <iostream>
#include <functional>

int main() {
    auto lambda = [](int x) {
        return x * x;
    };

    std::cout << "Square of 6: " << std::invoke(lambda, 6) << std::endl; // Outputs: 36

    return 0;
}
