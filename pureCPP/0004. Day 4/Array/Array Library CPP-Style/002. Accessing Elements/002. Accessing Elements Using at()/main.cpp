#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr = {10, 20, 30, 40, 50};
    std::cout << arr.at(2) << std::endl; // Access third element: 30

    return 0;
}