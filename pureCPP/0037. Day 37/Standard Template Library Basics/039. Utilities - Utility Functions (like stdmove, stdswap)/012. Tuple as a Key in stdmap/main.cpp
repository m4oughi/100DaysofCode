#include <iostream>
#include <map>
#include <tuple>

int main() {
    std::map<std::tuple<int, int>, std::string> coordinates;

    coordinates[{0, 0}] = "Origin";
    coordinates[{1, 2}] = "Point A";
    coordinates[{3, 4}] = "Point B";

    for (const auto& [coord, name] : coordinates) {
        std::cout << "(" << std::get<0>(coord) << ", " << std::get<1>(coord) << "): " << name << "\n";
    }

    return 0;
}
