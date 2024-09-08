#include <iostream>
#include <vector>

class Point {
public:
    int x, y;
    Point(int x, int y) : x(x), y(y) {
        std::cout << "Constructed Point(" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    std::vector<Point> points;
    
    points.emplace_back(1, 2);  // Constructs in place
    points.emplace_back(3, 4);  // Constructs in place

    std::cout << "Points in the vector:" << std::endl;
    for (const auto& point : points) {
        std::cout << "(" << point.x << ", " << point.y << ") ";
    }

    return 0;
}
