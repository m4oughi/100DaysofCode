#include <iostream>
#include <vector>
#include <iterator>

struct Point {
    int x, y;
    friend std::istream& operator>>(std::istream& in, Point& p) {
        return in >> p.x >> p.y;
    }
    friend std::ostream& operator<<(std::ostream& out, const Point& p) {
        return out << "(" << p.x << ", " << p.y << ")";
    }
};

int main() {
    std::cout << "Enter points (x y pairs, end input with non-integer): ";
    std::vector<Point> points(std::istream_iterator<Point>(std::cin), std::istream_iterator<Point>());

    std::cout << "You entered: ";
    std::copy(points.begin(), points.end(), std::ostream_iterator<Point>(std::cout, " "));

    return 0;
}
