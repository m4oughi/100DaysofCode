#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 1, 2, 3, 3, 4, 4, 5};

    auto new_end = std::unique(vec.begin(), vec.end());

    std::cout << "Vector after std::unique: ";
    for (auto it = vec.begin(); it != new_end; ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
