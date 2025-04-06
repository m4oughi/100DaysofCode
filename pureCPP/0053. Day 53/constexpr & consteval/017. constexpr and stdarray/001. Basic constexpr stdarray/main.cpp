#include <iostream>
#include <array>

constexpr std::array<int, 5> arr = {1, 2, 3, 4, 5};

int main() {
    std::cout << "First element: " << arr[0] << '\n';
    std::cout << "Last element: " << arr[arr.size() - 1] << '\n';
}
