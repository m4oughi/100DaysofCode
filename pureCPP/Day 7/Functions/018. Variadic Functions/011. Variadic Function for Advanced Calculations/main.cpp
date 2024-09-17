#include <iostream>
#include <cmath>

template<typename... Args>
double calculateSumOfSquares(Args... args) {
    return (std::pow(args, 2) + ...);  // Calculate the sum of squares
}

int main() {
    std::cout << "Sum of squares (1, 2, 3): " << calculateSumOfSquares(1, 2, 3) << std::endl;
    std::cout << "Sum of squares (4, 5): " << calculateSumOfSquares(4, 5) << std::endl;

    return 0;
}
