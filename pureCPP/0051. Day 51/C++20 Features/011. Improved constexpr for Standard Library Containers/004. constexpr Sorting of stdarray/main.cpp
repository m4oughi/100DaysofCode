#include <array>
#include <algorithm>
#include <iostream>

constexpr std::array<int, 5> sort_array(std::array<int, 5> arr) {
    std::sort(arr.begin(), arr.end());
    return arr;
}

int main() {
    constexpr std::array<int, 5> sorted_arr = sort_array({5, 3, 1, 4, 2});

    for (int i : sorted_arr) {
        std::cout << i << " ";
    }
}
