#include <iostream>
#include <array>

int main() {
    std::array<std::array<int, 2>, 2> nestedArray = {{{1, 2}, {3, 4}}};
    auto& [innerArray1, innerArray2] = nestedArray;  // Unpacking nested arrays
    auto& [x1, y1] = innerArray1;
    auto& [x2, y2] = innerArray2;
    
    std::cout << "First pair: (" << x1 << ", " << y1 << "), Second pair: (" << x2 << ", " << y2 << ")" << std::endl;
    
    return 0;
}