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
    std::vector<Point> vec2 = {{1, 2}, {3, 4}, {5, 6}};

    bool isEqual = std::equal(vec1.begin(), vec1.end(), vec2.begin(), comparePoints);

    std::cout << (isEqual ? "Containers are equal." : "Containers are not equal.") << std::endl;

    return 0;
}
