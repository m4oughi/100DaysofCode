#include <iostream>
#include <array>
#include <vector>

int main() {
    std::array<int, 5> arr = {10, 20, 30, 40, 50};
    std::vector<int> vec;

    vec.resize(arr.size());  // Resize vector to match array size

    std::copy(arr.begin(), arr.end(), vec.begin());

    for (const auto& elem : vec) {
        std::cout << elem << " ";  // Output: 10 20 30 40 50
    }

    return 0;
}