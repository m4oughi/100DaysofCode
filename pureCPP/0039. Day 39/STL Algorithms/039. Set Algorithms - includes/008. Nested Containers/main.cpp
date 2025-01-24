#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::vector<int>> superset = {{1, 2}, {3, 4}, {5, 6}};
    std::vector<std::vector<int>> subset = {{3, 4}, {5, 6}};

    if (std::includes(
            superset.begin(), superset.end(),
            subset.begin(), subset.end(),
            [](const std::vector<int>& a, const std::vector<int>& b) { return a < b; })) {
        std::cout << "Subset is included in the superset.\n";
    } else {
        std::cout << "Subset is not included in the superset.\n";
    }

    return 0;
}
