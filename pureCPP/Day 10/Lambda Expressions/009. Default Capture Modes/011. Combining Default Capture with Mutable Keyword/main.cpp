#include <iostream>

int main() {
    int count = 0;
    auto lambda = [=]() mutable {
        count += 1; // Modifies captured-by-value copy inside lambda
        std::cout << "Inside lambda, count: " << count << std::endl;
    };

    lambda(); // Outputs: Inside lambda, count: 1
    std::cout << "Outside lambda, count: " << count << std::endl; // Outputs: Outside lambda, count: 0
    return 0;
}
