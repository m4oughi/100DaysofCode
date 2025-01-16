#include <iostream>
#include <vector>

int main() {
    std::vector<std::pair<int, int>> vec;

    vec.emplace_back(1, 2); // Construct in-place
    vec.emplace_back(3, 4);

    std::cout << "Vector of pairs:\n";
    for (const auto& p : vec) {
        std::cout << "(" << p.first << ", " << p.second << ") ";
    }
    std::cout << "\n";

    return 0;
}
