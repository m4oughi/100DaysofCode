#include <iostream>
#include <array>
#include <vector>

int main() {
    std::array<int, 3> arr = {1, 2, 3};
    std::vector<int> vec = {1, 2, 3};

    std::cout << "Size of std::array<int, 3>: " << sizeof(arr) << " bytes" << std::endl;  // Size reflects fixed memory allocation
    std::cout << "Size of std::vector<int>: " << sizeof(vec) << " bytes" << std::endl;  // Size includes dynamic memory management

    return 0;
}