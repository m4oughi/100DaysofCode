#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {10, 20, 30, 40, 50};

    auto it = std::lower_bound(vec.begin(), vec.end(), 30); // First position where 30 could fit
    std::cout << "Lower bound of 30 is at position: " << std::distance(vec.begin(), it) << "\n";

    return 0;
}
