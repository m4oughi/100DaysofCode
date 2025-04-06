#include <iostream>
#include <array>

constexpr std::array<int, 5> reverseArray(std::array<int, 5> arr) {
    return {arr[4], arr[3], arr[2], arr[1], arr[0]};
}

int main() {
    constexpr std::array<int, 5> arr = {1, 2, 3, 4, 5};
    constexpr std::array<int, 5> revArr = reverseArray(arr);

    for (int val : revArr) {
        std::cout << val << " ";
    }
    std::cout << '\n';

    return 0;
}
