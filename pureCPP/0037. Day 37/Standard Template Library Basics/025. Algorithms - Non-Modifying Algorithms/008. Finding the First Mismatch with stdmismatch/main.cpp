#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2 = {1, 2, 0, 4, 5};

    auto result = std::mismatch(vec1.begin(), vec1.end(), vec2.begin());
    if (result.first != vec1.end()) {
        std::cout << "First mismatch: " << *result.first << " and " << *result.second << "\n";
    } else {
        std::cout << "No mismatches found.\n";
    }

    return 0;
}
