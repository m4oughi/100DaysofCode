#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr;
    std::fill(arr.begin(), arr.end(), 10); // All elements are set to 10

    return 0;
}