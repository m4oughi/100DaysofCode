#include <iostream>
#include <map>

int main() {
    std::map<std::pair<int, int>, std::string> points;

    points[{1, 2}] = "Point A";
    points[{3, 4}] = "Point B";
    points[{5, 6}] = "Point C";

    std::cout << "Label of (3,4): " << points[{3, 4}] << "\n";

    return 0;
}
