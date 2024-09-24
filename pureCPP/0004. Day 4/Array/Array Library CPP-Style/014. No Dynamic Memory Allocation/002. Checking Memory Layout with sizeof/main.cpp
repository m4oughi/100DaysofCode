#include <iostream>
#include <array>

int main() {
    std::array<int, 4> arr = {1, 2, 3, 4};
    std::cout << "Size of std::array<int, 4>: " << sizeof(arr) << " bytes" << std::endl;
    std::cout << "Size of 4 integers: " << sizeof(int) * arr.size() << " bytes" << std::endl;

    return 0;
}