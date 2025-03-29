#include <iostream>
#include <compare>

struct Circle {
    double radius;

    std::partial_ordering operator<=>(const Circle&) const = default;  
};

int main() {
    Circle c1{3.5}, c2{3.5}, c3{4.0};

    std::cout << std::boolalpha;
    std::cout << (c1 == c2) << "\n";  // true
    std::cout << (c1 < c3) << "\n";   // true

    return 0;
}
