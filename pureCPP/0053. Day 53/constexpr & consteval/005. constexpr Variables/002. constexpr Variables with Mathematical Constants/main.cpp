#include <iostream>

constexpr double pi = 3.141592653589793;
constexpr double radius = 5.0;
constexpr double circumference = 2 * pi * radius;

int main() {
    std::cout << "Circumference of circle: " << circumference << '\n';
    return 0;
}
