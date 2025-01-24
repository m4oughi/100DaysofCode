#include <iostream>
#include <vector>
#include <algorithm>

bool isClose(int a, int b) {
    return std::abs(a - b) <= 2;
}

int main() {
    std::vector<int> vec = {1, 4, 7, 9, 10};

    auto it = std::adjacent_find(vec.begin(), vec.end(), isClose);

    if (it != vec.end()) {
        std::cout << "First adjacent pair matching the condition: " << *it << " and " << *(it + 1) 
                  << " at index: " << std::distance(vec.begin(), it) << std::endl;
    } else {
        std::cout << "No matching adjacent pairs found." << std::endl;
    }

    return 0;
}
