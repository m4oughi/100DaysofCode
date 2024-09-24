#include <iostream>
#include <array>
#include <cstddef>

struct CustomStruct {
    char c;
    int i;
};

int main() {
    std::array<CustomStruct, 2> arr = {{{'a', 1}, {'b', 2}}};
    std::cout << "Size of CustomStruct: " << sizeof(CustomStruct) << " bytes" << std::endl;
    std::cout << "Size of array: " << sizeof(arr) << " bytes" << std::endl;

    uintptr_t firstElementAddress = reinterpret_cast<uintptr_t>(&arr[0]);
    uintptr_t secondElementAddress = reinterpret_cast<uintptr_t>(&arr[1]);
    std::cout << "Address of arr[0]: " << &arr[0] << std::endl;
    std::cout << "Address of arr[1]: " << &arr[1] << std::endl;
    std::cout << "Difference in addresses: " << secondElementAddress - firstElementAddress << " bytes" << std::endl;


    return 0;
}