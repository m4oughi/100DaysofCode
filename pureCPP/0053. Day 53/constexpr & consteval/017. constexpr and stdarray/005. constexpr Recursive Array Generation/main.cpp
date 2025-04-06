#include <iostream>
#include <array>

constexpr std::array<int, 5> fillArray(int index = 0, std::array<int, 5> arr = {}) {
    if (index >= arr.size()) return arr;
    arr[index] = (index + 1) * (index + 1);
    return fillArray(index + 1, arr);
}

int main() {
    constexpr auto squares = fillArray();

    for (int num : squares)
        std::cout << num << " ";

    std::cout << '\n';
}
