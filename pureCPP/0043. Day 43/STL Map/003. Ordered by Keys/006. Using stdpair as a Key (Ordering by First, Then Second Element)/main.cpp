#include <iostream>
#include <map>

int main() {
    std::map<std::pair<int, int>, std::string> points;

    points[{2, 3}] = "B";
    points[{1, 5}] = "A";
    points[{2, 1}] = "C";

    std::cout << "Points stored in order:\n";
    for (const auto& entry : points) {
        std::cout << "(" << entry.first.first << ", " << entry.first.second << ") -> " << entry.second << "\n";
    }

    return 0;
}
