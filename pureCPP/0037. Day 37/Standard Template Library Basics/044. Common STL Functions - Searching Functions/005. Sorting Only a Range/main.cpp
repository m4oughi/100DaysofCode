#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {10, 20, 30, 30, 40, 50};

    auto it = std::upper_bound(vec.begin(), vec.end(), 30); // First element greater than 30
    std::cout << "Upper bound of 30 is at position: " << std::distance(vec.begin(), it) << "\n";

    return 0;
}
