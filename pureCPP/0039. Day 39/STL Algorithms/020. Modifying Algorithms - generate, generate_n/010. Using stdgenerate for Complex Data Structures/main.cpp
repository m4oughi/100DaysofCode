#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::vector<int>> nested(3, std::vector<int>(3));
    int val = 1;

    std::generate(nested.begin(), nested.end(), [&val]() {
        std::vector<int> row(3);
        std::generate(row.begin(), row.end(), [&val]() { return val++; });
        return row;
    });

    std::cout << "Generated nested structure:\n";
    for (const auto& row : nested) {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
