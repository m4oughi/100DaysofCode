#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 3, 4, 5};

    auto it = std::adjacent_find(vec.begin(), vec.end());

    if (it != vec.end()) {
        std::cout << "First adjacent duplicate: " << *it << " at index: " << std::distance(vec.begin(), it) << std::endl;
    } else {
        std::cout << "No adjacent duplicates found." << std::endl;
    }

    return 0;
}
