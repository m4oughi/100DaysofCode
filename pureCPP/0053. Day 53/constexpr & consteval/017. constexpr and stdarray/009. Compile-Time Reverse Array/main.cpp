#include <iostream>
#include <array>
#include <algorithm>

constexpr std::array<int, 5> reverseArray(std::array<int, 5> arr) {
    std::reverse(arr.begin(), arr.end());
    return arr;
}

int main() {
    constexpr std::array<int, 5> reversed = reverseArray({1, 2, 3, 4, 5});

    for (int num : reversed)
        std::cout << num << " ";

    std::cout << '\n';
}
