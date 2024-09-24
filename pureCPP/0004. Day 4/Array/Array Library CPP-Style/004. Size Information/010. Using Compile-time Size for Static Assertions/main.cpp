#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr = {10, 20, 30, 40, 50};

    static_assert(arr.size() == 5, "Array size must be 5");  // Compile-time check

    std::cout << "Array size check passed." << std::endl;  // Output: Array size check passed.


    return 0;
}