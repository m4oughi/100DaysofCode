#include <iostream>
#include <array>

int main() {
    std::array<int, 3> arr1 = {1, 2, 3};
    std::array<int, 3> arr2 = std::move(arr1); // Move initialization
    // arr1 is now in a valid but unspecified state

    return 0;
}