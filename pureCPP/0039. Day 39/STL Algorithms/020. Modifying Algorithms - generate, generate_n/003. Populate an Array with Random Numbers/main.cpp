#include <iostream>
#include <array>
#include <algorithm>
#include <cstdlib>

int main() {
    std::array<int, 5> arr;

    std::generate(arr.begin(), arr.end(), []() { return rand() % 100; });

    std::cout << "Generated random numbers: ";
    for (int val : arr) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
