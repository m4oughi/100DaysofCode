#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 2, 4, 2, 5};

    auto newEnd = std::remove(vec.begin(), vec.end(), 2);

    std::cout << "After remove: ";
    for (auto it = vec.begin(); it != newEnd; ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n";

    return 0;
}
