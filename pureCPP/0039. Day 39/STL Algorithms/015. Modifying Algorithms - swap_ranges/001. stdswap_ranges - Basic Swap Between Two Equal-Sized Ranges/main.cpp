#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2 = {10, 20, 30, 40, 50};

    std::swap_ranges(vec1.begin(), vec1.end(), vec2.begin());

    std::cout << "vec1 after swap: ";
    for (int num : vec1) {
        std::cout << num << " ";
    }
    std::cout << "\nvec2 after swap: ";
    for (int num : vec2) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
