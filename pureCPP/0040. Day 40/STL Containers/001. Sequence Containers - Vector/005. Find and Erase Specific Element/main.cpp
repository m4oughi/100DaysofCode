#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {10, 20, 30, 40, 50};

    // Find element 30
    auto it = std::find(vec.begin(), vec.end(), 30);

    if (it != vec.end()) {
        std::cout << "Element found at index: " << std::distance(vec.begin(), it) << "\n";
        vec.erase(it); // Remove the element
    }

    for (int i : vec) std::cout << i << " ";

    return 0;
}
