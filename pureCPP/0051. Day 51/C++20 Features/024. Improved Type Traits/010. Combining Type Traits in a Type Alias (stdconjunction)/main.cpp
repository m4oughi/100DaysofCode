#include <iostream>
#include <type_traits>

template <typename T>
using is_valid_type = std::conjunction<std::is_integral<T>, std::is_unsigned<T>>;

int main() {
    std::cout << "unsigned int is a valid type: " << is_valid_type<unsigned int>::value << "\n";  // true
    std::cout << "int is a valid type: " << is_valid_type<int>::value << "\n";  // false
    return 0;
}
