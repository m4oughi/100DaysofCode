#include <iostream>
#include <array>

constexpr std::array<int, 5> generateArray() {
    std::array<int, 5> arr{};
    for (size_t i = 0; i < arr.size(); ++i) {
        arr[i] = i * i;
    }
    return arr;
}

int main() {
    constexpr auto arr = generateArray();
    std::cout << "First element: " << arr[0] << ", Last element: " << arr[4] << "\n";
}
