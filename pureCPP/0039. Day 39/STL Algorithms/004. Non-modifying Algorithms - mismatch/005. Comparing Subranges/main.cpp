#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec1 = {10, 20, 30, 40, 50};
    std::vector<int> vec2 = {10, 20, 0, 40, 50};

    auto result = std::mismatch(vec1.begin() + 1, vec1.begin() + 4, vec2.begin() + 1);

    if (result.first != vec1.begin() + 4) {
        std::cout << "Mismatch found in subrange at index " << (result.first - vec1.begin()) << ": "
                  << *result.first << " (vec1) vs " << *result.second << " (vec2)." << std::endl;
    } else {
        std::cout << "No mismatch found in subrange." << std::endl;
    }

    return 0;
}
