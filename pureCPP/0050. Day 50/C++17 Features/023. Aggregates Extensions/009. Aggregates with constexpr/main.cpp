#include <iostream>

struct Point {
    double x, y;
};

constexpr Point origin() {
    return {0.0, 0.0}; // Aggregate initialization in constexpr function
}

int main() {
    constexpr Point p = origin();
    std::cout << "Origin: (" << p.x << ", " << p.y << ")\n";
    return 0;
}
