#include <iostream>
#include <vector>
#include <algorithm>

struct Point {
    int x, y;

    bool operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }
};

int main() {
    std::vector<Point> points = {{1, 2}, {3, 4}, {5, 6}, {3, 4}, {7, 8}};
    std::vector<Point> subseq = {{3, 4}};

    auto it = std::find_end(points.begin(), points.end(), subseq.begin(), subseq.end());

    if (it != points.end()) {
        std::cout << "Last occurrence found at position: " 
                  << std::distance(points.begin(), it) << std::endl;
    } else {
        std::cout << "Subsequence not found." << std::endl;
    }

    return 0;
}
