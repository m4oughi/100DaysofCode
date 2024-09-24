#include <iostream>
#include <array>

int main() {
    std::array<char, 3> arr;
    decltype(arr)::value_type ch = 'A';  // char
    std::cout << "Value type of array is char: " << ch << std::endl;

    return 0;
}