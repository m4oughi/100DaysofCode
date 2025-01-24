#include <iostream>
#include <vector>
#include <algorithm>

bool isGreaterThan(int value, int threshold) {
    return value > threshold;
}

int main() {
    std::vector<int> vec = {1, 2, 3, 5, 5, 5, 7};

    auto it = std::search_n(vec.begin(), vec.end(), 3, 5, isGreaterThan);

    if (it != vec.end()) {
        std::cout << "Found 3 consecutive elements greater than 5 starting at index: " 
                  << std::distance(vec.begin(), it) << std::endl;
    } else {
        std::cout << "No consecutive elements found." << std::endl;
    }

    return 0;
}
