#include <iostream>
#include <array>
#include <algorithm>

int main() {
    std::array<int, 5> arr = {10, 20, 30, 40, 50};

    // Rotate array to the left by 2 positions
    std::rotate(arr.begin(), arr.begin() + 2, arr.end());

    for (int i : arr) {
        std::cout << i << " ";
    }

    return 0;
}
