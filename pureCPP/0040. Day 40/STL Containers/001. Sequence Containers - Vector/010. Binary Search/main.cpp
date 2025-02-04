#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {10, 20, 30, 40, 50};

    // Check if 30 exists in the sorted vector
    bool found = std::binary_search(vec.begin(), vec.end(), 30);

    std::cout << (found ? "Element found" : "Element not found") << "\n";

    return 0;
}
