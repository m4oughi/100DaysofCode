#include <iostream>
#include <array>
#include <algorithm>

int main() {
    std::array<int, 4> arr = {10, 20, 30, 40};
    std::for_each(arr.begin(), arr.end(), [](int& n) { n += 5; });  // Increment each element by 5

    std::cout << "Modified array: ";
    for (const int& n : arr) {
        std::cout << n << " ";  // Output: 15 25 35 45
    }
    std::cout << std::endl;

    return 0;
}