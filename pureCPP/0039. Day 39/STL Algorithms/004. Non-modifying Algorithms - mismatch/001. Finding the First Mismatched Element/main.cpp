#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2 = {1, 2, 0, 4, 5};

    auto result = std::mismatch(vec1.begin(), vec1.end(), vec2.begin());

    if (result.first != vec1.end()) {
        std::cout << "Mismatch found at index " << (result.first - vec1.begin()) << ": "
                  << *result.first << " (vec1) vs " << *result.second << " (vec2)." << std::endl;
    } else {
        std::cout << "No mismatch found." << std::endl;
    }

    return 0;
}
