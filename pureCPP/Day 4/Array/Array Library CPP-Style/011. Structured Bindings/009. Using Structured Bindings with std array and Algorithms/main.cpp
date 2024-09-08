#include <iostream>
#include <array>
#include <algorithm>

int main() {
    std::array<int, 5> arr = {10, 20, 30, 40, 50};
    auto [min, max] = std::minmax_element(arr.begin(), arr.end());  // Using algorithm with structured bindings

    std::cout << "Min: " << *min << ", Max: " << *max << std::endl;  // Output: Min: 10, Max: 50
    return 0;
}
