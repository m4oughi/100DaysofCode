#include <iostream>
#include <array>
#include <algorithm>  // For std::generate

int main() {
    std::array<int, 5> arr;

    int n = 0;
    std::generate(arr.begin(), arr.end(), [&n]() { return n += 10; });  // Assign incremented values

    for (const auto& elem : arr) {
        std::cout << elem << " ";  // Output: 10 20 30 40 50
    }

    return 0;
}