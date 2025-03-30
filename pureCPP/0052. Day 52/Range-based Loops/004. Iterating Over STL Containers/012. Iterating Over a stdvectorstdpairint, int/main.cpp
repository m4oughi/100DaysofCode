#include <iostream>
#include <vector>

int main() {
    std::vector<std::pair<int, int>> coordinates = {{1, 2}, {3, 4}, {5, 6}};

    for (const auto& [x, y] : coordinates) {
        std::cout << "X: " << x << ", Y: " << y << std::endl;
    }

    return 0;
}
