#include <iostream>
#include <array>

constexpr std::array<int, 5> generateArrayLoop() {
    std::array<int, 5> arr = {};
    for (size_t i = 0; i < arr.size(); i++) {
        arr[i] = (i + 1) * 10;
    }
    return arr;
}

int main() {
    constexpr auto arr = generateArrayLoop();

    for (int num : arr)
        std::cout << num << " ";

    std::cout << '\n';
}
