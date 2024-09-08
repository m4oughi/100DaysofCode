#include <iostream>
#include <array>
#include <algorithm>

int main() {
    std::array<int, 6> arr = {1, 2, 3, 7, 8, 9};  // Assume array is partitioned based on a condition (e.g., < 5)
    auto it = std::partition_point(arr.begin(), arr.end(), [](int n) { return n < 5; });  // Find partition point

    std::cout << "Partition point index: " << std::distance(arr.begin(), it) << std::endl;  // Output: 3
    return 0;
}