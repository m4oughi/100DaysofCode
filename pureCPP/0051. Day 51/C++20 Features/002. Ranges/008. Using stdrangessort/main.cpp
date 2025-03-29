#include <iostream>
#include <ranges>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {5, 3, 1, 4, 2};

    std::ranges::sort(vec);  // Sort using ranges

    for (int n : vec) {
        std::cout << n << " ";
    }
    std::cout << '\n';
}
