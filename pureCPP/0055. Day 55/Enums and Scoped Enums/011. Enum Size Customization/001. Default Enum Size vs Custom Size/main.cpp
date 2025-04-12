#include <iostream>
#include <type_traits>

enum DefaultEnum { A, B, C };                 // Usually int
enum SmallEnum : uint8_t { X, Y, Z };         // Custom size

int main() {
    std::cout << "DefaultEnum size: " << sizeof(DefaultEnum) << " bytes\n";
    std::cout << "SmallEnum size: " << sizeof(SmallEnum) << " bytes\n";
}
