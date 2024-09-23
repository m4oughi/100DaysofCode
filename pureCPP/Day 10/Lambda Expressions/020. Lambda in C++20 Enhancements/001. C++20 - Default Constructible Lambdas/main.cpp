#include <iostream>

int main() {
    auto lambda = [](int x) {
        return x * x;
    };

    // Default constructor for the lambda object
    auto defaultLambda = lambda;
    std::cout << "Square of 3: " << defaultLambda(3) << std::endl; // Outputs: 9
    return 0;
}
