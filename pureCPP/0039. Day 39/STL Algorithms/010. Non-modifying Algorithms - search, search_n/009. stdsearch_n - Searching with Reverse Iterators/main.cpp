#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 3, 3, 4, 5};

    auto it = std::search_n(vec.rbegin(), vec.rend(), 3, 3);

    if (it != vec.rend()) {
        std::cout << "Found 3 consecutive 3s in reverse starting at index: " 
                  << vec.size() - std::distance(vec.rbegin(), it) - 1 << std::endl;
    } else {
        std::cout << "No consecutive elements found in reverse." << std::endl;
    }

    return 0;
}
