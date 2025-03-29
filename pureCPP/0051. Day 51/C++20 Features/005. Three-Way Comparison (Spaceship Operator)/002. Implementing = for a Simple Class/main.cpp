#include <iostream>
#include <compare>

class Point {
public:
    int x, y;

    auto operator<=>(const Point&) const = default; // Auto-generated comparisons
};

int main() {
    Point p1{3, 4}, p2{3, 5};

    if (p1 < p2) std::cout << "p1 is less than p2\n";
    else if (p1 > p2) std::cout << "p1 is greater than p2\n";
    else std::cout << "p1 is equal to p2\n";
}
