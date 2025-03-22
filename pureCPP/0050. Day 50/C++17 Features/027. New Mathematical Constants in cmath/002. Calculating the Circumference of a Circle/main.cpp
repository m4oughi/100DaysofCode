#include <iostream>
#include <cmath>
#include <numbers>

int main() {
    double radius = 5.0;
    double circumference = 2 * std::numbers::pi * radius;
    
    std::cout << "Circumference of Circle: " << circumference << "\n"; // Output: 31.4159...
    return 0;
}
