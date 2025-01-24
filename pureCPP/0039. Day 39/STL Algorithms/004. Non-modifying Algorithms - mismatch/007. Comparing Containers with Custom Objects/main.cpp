#include <iostream>
#include <vector>
#include <algorithm>

struct Point {
    int x, y;
};

bool comparePoints(const Point& p1, const Point& p2) {
    return p1.x == p2.x && p1.y == p2.y;
}

int main() {
    std::vector<Point> vec1 = {{1, 2}, {3, 4}, {5, 6}};
    std::vector<Point> vec2 = {{1, 2}, {3, 0}, {5, 6}};

    auto result = std::mismatch(vec1.begin(), vec1.end(), vec2.begin(), comparePoints);

    if (result.first != vec1.end()) {
        std::cout << "Mismatch found: (" << result.first->x << ", " << result.first->y << ") (vec1) vs ("
                  << result.second->x << ", " << result.second->y << ") (vec2)." << std::endl;
    } else {
        std::cout << "No mismatch found." << std::endl;
    }

    return 0;
}
