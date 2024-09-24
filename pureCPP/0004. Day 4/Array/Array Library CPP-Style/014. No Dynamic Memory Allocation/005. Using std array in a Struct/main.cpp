#include <iostream>
#include <array>

struct MyStruct {
    std::array<int, 3> arr = {1, 2, 3};
};

int main() {
    MyStruct s;
    std::cout << "Size of MyStruct: " << sizeof(s) << " bytes" << std::endl;  // Output: Size of MyStruct: 12 bytes (on most systems)
    std::cout << "Size of array within struct: " << sizeof(s.arr) << " bytes" << std::endl;

    return 0;
}