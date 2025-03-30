#include <iostream>
#include <set>
#include <vector>

int main() {
    std::set<std::vector<int>> uniqueLists = {
        {1, 2, 3}, {4, 5, 6}, {7, 8, 9}
    };

    for (const auto& list : uniqueLists) {
        for (const auto& num : list) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
