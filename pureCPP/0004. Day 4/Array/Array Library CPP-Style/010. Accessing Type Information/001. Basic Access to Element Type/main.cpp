#include <iostream>
#include <array>
#include <type_traits>

int main() {
    std::array<int, 5> arr;
    using ElementType = std::array<int, 5>::value_type;  // int
    std::cout << "Element type: " << (std::is_same<ElementType, int>::value ? "int" : "other") << std::endl;
    
    return 0;
}