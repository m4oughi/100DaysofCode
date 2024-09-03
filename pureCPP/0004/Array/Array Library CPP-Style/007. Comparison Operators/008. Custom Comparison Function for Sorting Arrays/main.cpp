#include <iostream>
#include <array>
#include <vector>
#include <algorithm>  // For std::sort

bool customCompare(const std::array<int, 3>& a, const std::array<int, 3>& b) {
    return a[0] < b[0];  // Compare based on the first element
}

int main() {
    std::vector<std::array<int, 3>> vec = {{3, 2, 1}, {1, 2, 3}, {2, 3, 4}};

    std::sort(vec.begin(), vec.end(), customCompare);

    for (const auto& arr : vec) {
        std::cout << arr[0] << " " << arr[1] << " " << arr[2] << std::endl;
    }
    // Output:
    // 1 2 3
    // 2 3 4
    // 3 2 1

    return 0;
}