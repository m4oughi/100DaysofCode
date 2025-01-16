#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7};

    auto newEnd = std::remove_if(vec.begin(), vec.end(), [](int x) { return x % 2 == 0; });

    std::cout << "After remove_if: ";
    for (auto it = vec.begin(); it != newEnd; ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n";

    return 0;
}
