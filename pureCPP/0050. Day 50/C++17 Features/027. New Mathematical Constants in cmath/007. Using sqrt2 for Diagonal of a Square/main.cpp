#include <iostream>
#include <cmath>
#include <numbers>

int main() {
    double side_length = 7.0;
    double diagonal = side_length * std::numbers::sqrt2;

    std::cout << "Diagonal of Square: " << diagonal << "\n"; // Output: 9.899...
    return 0;
}
