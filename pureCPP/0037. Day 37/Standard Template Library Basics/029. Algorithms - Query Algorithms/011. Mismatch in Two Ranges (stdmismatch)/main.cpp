#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2 = {1, 2, 0, 4, 5};

    auto result = std::mismatch(vec1.begin(), vec1.end(), vec2.begin());

    std::cout << "Mismatch found at position: "
              << std::distance(vec1.begin(), result.first) << "\n";

    return 0;
}
