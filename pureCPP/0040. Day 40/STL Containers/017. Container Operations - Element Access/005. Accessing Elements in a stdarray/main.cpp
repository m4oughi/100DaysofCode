#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr = {1, 2, 3, 4, 5};

    std::cout << "Element at index 2: " << arr.at(2) << "\n"; // 3
    std::cout << "First element: " << arr.front() << "\n"; // 1
    std::cout << "Last element: " << arr.back() << "\n"; // 5

    return 0;
}
