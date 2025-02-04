#include <iostream>
#include <map>

struct Point {
    int x, y;

    bool operator<(const Point& other) const {
        return (x < other.x) || (x == other.x && y < other.y);
    }
};

int main() {
    std::map<Point, std::string> m;

    m[{1, 2}] = "A";
    m[{3, 4}] = "B";

    for (const auto& [key, value] : m) {
        std::cout << "(" << key.x << ", " << key.y << "): " << value << "\n";
    }

    return 0;
}
