#include <iostream>
#include <array>

int main() {
    std::array<int, 3> arr = {1, 2, 3};

    // Trying to change the size will cause a compile-time error
    // arr.resize(5);  // Error: 'class std::array<int, 3>' has no member named 'resize'

    return 0;
}