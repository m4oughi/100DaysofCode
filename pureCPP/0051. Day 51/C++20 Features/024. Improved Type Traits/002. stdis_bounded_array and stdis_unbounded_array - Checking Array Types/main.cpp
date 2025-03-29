#include <iostream>
#include <type_traits>

int main() {
    std::cout << std::boolalpha;
    std::cout << "int[10] is bounded array: " << std::is_bounded_array<int[10]>::value << "\n";  // true
    std::cout << "int[] is unbounded array: " << std::is_unbounded_array<int[]>::value << "\n";  // true
    return 0;
}
