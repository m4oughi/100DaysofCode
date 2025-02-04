#include <iostream>
#include <map>
#include <string>

struct Point {
    int x, y;

    bool operator<(const Point& other) const {
        return (x < other.x) || (x == other.x && y < other.y);
    }
};

int main() {
    std::multimap<Point, std::string> mm;

    mm.insert({{1, 2}, "A"});
    mm.insert({{2, 3}, "B"});
    mm.insert({{1, 2}, "C"}); // Duplicate key

    for (const auto& [key, value] : mm) {
        std::cout << "(" << key.x << ", " << key.y << "): " << value << "\n";
    }

    return 0;
}
