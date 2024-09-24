#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr = {10, 20, 30, 40, 50};

    std::cout << "Maximum size of array: " << arr.max_size() << std::endl;  // Output: 5


    return 0;
}