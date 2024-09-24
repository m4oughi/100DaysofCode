#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr;

    arr.at(0) = 30;  // Assign using at()
    arr.at(1) = 40;

    std::cout << arr.at(0) << " " << arr.at(1) << std::endl;  // Output: 30 40


    return 0;
}