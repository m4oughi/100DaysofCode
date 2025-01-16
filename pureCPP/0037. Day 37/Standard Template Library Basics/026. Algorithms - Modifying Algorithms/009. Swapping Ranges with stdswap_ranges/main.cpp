#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {4, 5, 6};

    std::swap_ranges(vec1.begin(), vec1.end(), vec2.begin());

    std::cout << "After swap_ranges:\n";
    std::cout << "vec1: ";
    for (int num : vec1) {
        std::cout << num << " ";
    }
    std::cout << "\nvec2: ";
    for (int num : vec2) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
