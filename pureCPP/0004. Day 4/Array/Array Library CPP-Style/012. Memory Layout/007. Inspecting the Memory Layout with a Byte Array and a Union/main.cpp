#include <iostream>
#include <array>

union DataUnion {
    std::array<int, 2> arr;
    char raw[sizeof(arr)];
};

int main() {
    DataUnion data = {std::array<int, 2>{1234, 5678}};
    std::cout << "Inspecting memory layout of array using union:" << std::endl;
    for (size_t i = 0; i < sizeof(data.arr); ++i) {
        std::cout << "Byte " << i << ": " << static_cast<int>(data.raw[i]) << std::endl;
    }

    return 0;
}