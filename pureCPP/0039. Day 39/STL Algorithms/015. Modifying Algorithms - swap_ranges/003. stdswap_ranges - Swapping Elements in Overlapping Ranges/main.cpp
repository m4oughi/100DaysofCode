#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 6};

    // Swap first 3 elements with the last 3 elements
    std::swap_ranges(vec.begin(), vec.begin() + 3, vec.begin() + 3);

    std::cout << "Vector after overlapping swap: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
