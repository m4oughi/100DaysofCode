#include <iostream>

template<typename T>
constexpr std::size_t type_size = sizeof(T);

int main() {
    std::cout << "Size of int: " << type_size<int> << " bytes\n";
    std::cout << "Size of double: " << type_size<double> << " bytes\n";
    std::cout << "Size of char: " << type_size<char> << " bytes\n";

    return 0;
}
