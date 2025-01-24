#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> arr = {1, 2, 2, 3, 4, 4, 5};

    auto it = std::adjacent_find(arr.begin(), arr.end());

    if (it != arr.end()) {
        std::cout << "First peak found: " << *it << " at index: " << std::distance(arr.begin(), it) << std::endl;
    } else {
        std::cout << "No peaks found." << std::endl;
    }

    return 0;
}
