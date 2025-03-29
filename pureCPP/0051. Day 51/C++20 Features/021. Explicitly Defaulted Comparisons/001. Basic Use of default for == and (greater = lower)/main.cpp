#include <iostream>

struct Point {
    int x, y;

    auto operator<=>(const Point&) const = default;  // Default all comparisons
};

int main() {
    Point p1{3, 4}, p2{3, 4}, p3{5, 6};

    std::cout << std::boolalpha;
    std::cout << (p1 == p2) << "\n";  // true
    std::cout << (p1 < p3) << "\n";   // true

    return 0;
}
