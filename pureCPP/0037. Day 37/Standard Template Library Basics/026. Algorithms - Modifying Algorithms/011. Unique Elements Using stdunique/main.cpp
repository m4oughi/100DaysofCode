#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 1, 2, 2, 3, 3, 4};

    auto newEnd = std::unique(vec.begin(), vec.end());

    std::cout << "After unique: ";
    for (auto it = vec.begin(); it != newEnd; ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n";

    return 0;
}
