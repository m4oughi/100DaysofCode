#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {10, 20, 30, 40, 50};

    bool found = std::binary_search(vec.begin(), vec.end(), 30); // Check if 30 is in the vector
    std::cout << (found ? "Element found" : "Element not found") << "\n";

    return 0;
}
