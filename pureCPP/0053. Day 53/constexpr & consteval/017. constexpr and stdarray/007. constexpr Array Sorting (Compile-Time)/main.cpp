#include <iostream>
#include <array>
#include <algorithm>

constexpr std::array<int, 5> sortArray(std::array<int, 5> arr) {
    std::sort(arr.begin(), arr.end());
    return arr;
}

int main() {
    constexpr std::array<int, 5> sorted = sortArray({5, 1, 4, 3, 2});

    for (int num : sorted)
        std::cout << num << " ";

    std::cout << '\n';
}
