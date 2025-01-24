#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2 = {10, 20, 30, 40, 50};

    auto it1 = std::find_if(vec1.begin(), vec1.end(), [](int x) { return x > 3; });
    auto it2 = std::find_if(vec2.begin(), vec2.end(), [](int x) { return x > 30; });

    if (it1 != vec1.end() && it2 != vec2.end()) {
        std::swap_ranges(it1, vec1.end(), it2);
    }

    std::cout << "vec1 after conditional swap: ";
    for (int num : vec1) {
        std::cout << num << " ";
    }
    std::cout << "\nvec2 after conditional swap: ";
    for (int num : vec2) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
