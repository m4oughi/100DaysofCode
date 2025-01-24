#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec1 = {1, 2, 3, 4};
    std::vector<int> vec2 = {1, 2, 3};

    auto result = std::mismatch(vec2.begin(), vec2.end(), vec1.begin());

    if (result.first == vec2.end()) {
        std::cout << "vec2 is a prefix of vec1." << std::endl;
    } else {
        std::cout << "Mismatch found: " << *result.first << " (vec2) vs " << *result.second << " (vec1)." << std::endl;
    }

    return 0;
}
