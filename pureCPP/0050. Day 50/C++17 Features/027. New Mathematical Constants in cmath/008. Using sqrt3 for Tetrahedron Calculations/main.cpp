#include <iostream>
#include <cmath>
#include <numbers>

int main() {
    double edge_length = 3.0;
    double height = (std::numbers::sqrt3 / 2) * edge_length;

    std::cout << "Height of Equilateral Triangle: " << height << "\n"; // Output: 2.598...
    return 0;
}
