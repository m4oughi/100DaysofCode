#include <iostream>
#include <vector>
#include <algorithm>
#include <execution>

int main() {
    std::vector<int> data(1000000, 2);  // Large dataset initialized to value 2
    data[500000] = 3;  // Insert a target value in the middle

    // Parallel find_if to locate the element equal to 3
    auto it = std::find_if(std::execution::par, data.begin(), data.end(), [](int n) {
        return n == 3;
    });

    if (it != data.end()) {
        std::cout << "Element found at index: " << std::distance(data.begin(), it) << std::endl;
    } else {
        std::cout << "Element not found." << std::endl;
    }

    return 0;
}
