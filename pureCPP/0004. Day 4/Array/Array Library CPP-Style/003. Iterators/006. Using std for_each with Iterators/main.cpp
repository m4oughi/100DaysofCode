#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr = {10, 20, 30, 40, 50};

    std::for_each(arr.begin(), arr.end(), [](int& elem) {
        elem += 5;  // Increment each element by 5
    });

    for (const auto& elem : arr) {
        std::cout << elem << " ";  // Output: 15 25 35 45 55
    }

    return 0;
}