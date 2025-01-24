#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 3, 3, 4, 5};

    auto it = std::search_n(vec.begin(), vec.end(), 3, 3);

    if (it != vec.end()) {
        std::cout << "Found 3 consecutive 3s starting at index: " << std::distance(vec.begin(), it) << std::endl;
    } else {
        std::cout << "No consecutive elements found." << std::endl;
    }

    return 0;
}
