#include <iostream>
#include <cmath>
#include <numbers>

int main() {
    double radius = 4.0;
    double surface_area = 4 * std::numbers::pi * std::pow(radius, 2);
    double volume = (4.0 / 3.0) * std::numbers::pi * std::pow(radius, 3);

    std::cout << "Sphere Surface Area: " << surface_area << "\n"; // Output: 201.061...
    std::cout << "Sphere Volume: " << volume << "\n"; // Output: 268.083...
    return 0;
}
