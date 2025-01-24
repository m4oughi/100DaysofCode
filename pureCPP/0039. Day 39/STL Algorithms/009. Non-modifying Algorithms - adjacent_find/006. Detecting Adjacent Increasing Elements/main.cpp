#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {5, 4, 3, 6, 7, 2};

    auto it = std::adjacent_find(vec.begin(), vec.end(), [](int a, int b) {
        return b > a;
    });

    if (it != vec.end()) {
        std::cout << "First adjacent increasing elements: " << *it << " and " << *(it + 1) 
                  << " at index: " << std::distance(vec.begin(), it) << std::endl;
    } else {
        std::cout << "No adjacent increasing elements found." << std::endl;
    }

    return 0;
}
