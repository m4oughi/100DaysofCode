#include <iostream>
#include <deque>
#include <vector>

int main() {
    std::deque<std::vector<int>> dq1 = { {1, 2, 3}, {4, 5, 6} };
    std::deque<std::vector<int>> dq2 = { {7, 8, 9}, {10, 11, 12} };

    dq1.swap(dq2);

    std::cout << "dq1 after swap:\n";
    for (const auto& vec : dq1) {
        for (int num : vec) std::cout << num << " ";
        std::cout << "\n";
    }

    std::cout << "\ndq2 after swap:\n";
    for (const auto& vec : dq2) {
        for (int num : vec) std::cout << num << " ";
        std::cout << "\n";
    }

    return 0;
}
