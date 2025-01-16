#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {10, 20, 30, 30, 40, 50};

    auto range = std::equal_range(vec.begin(), vec.end(), 30); // Range of elements equal to 30
    std::cout << "Range of 30: [" 
              << std::distance(vec.begin(), range.first) << ", " 
              << std::distance(vec.begin(), range.second) << ")\n";

    return 0;
}
