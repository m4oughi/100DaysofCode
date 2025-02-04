#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr;

    arr.fill(7); // Fill all elements with 7

    for (int i : arr) {
        std::cout << i << " ";
    }

    return 0;
}
