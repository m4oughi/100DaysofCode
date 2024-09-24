#include <iostream>
#include <array>
#include <vector>

int main() {
    std::array<int, 10000> arr;  // Large fixed-size array
    std::vector<int> vec(10000);  // Vector with dynamic memory allocation

    std::cout << "Address of std::array: " << &arr << std::endl;
    std::cout << "Address of std::vector data: " << vec.data() << std::endl;

    return 0;
}