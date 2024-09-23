#include <iostream>
#include <array>

int main() {
    // Compile-time lambda to generate an array of squares
    constexpr auto squareArray = []() {
        std::array<int, 5> arr{};
        for (int i = 0; i < arr.size(); ++i) {
            arr[i] = i * i;
        }
        return arr;
    };

    constexpr auto arr = squareArray();

    for (const auto& val : arr) {
        std::cout << val << " "; // Outputs: 0 1 4 9 16
    }
    return 0;
}
