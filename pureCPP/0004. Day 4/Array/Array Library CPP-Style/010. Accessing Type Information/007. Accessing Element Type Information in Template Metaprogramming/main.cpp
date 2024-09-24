#include <iostream>
#include <array>
#include <type_traits>

// Metafunction to print type information
template <typename T>
void printTypeInfo() {
    if (std::is_same<typename T::value_type, int>::value) {
        std::cout << "Array elements are of type int." << std::endl;
    } else if (std::is_same<typename T::value_type, double>::value) {
        std::cout << "Array elements are of type double." << std::endl;
    } else {
        std::cout << "Array elements are of another type." << std::endl;
    }
}

int main() {
    std::array<int, 3> intArray;
    std::array<double, 5> doubleArray;
    std::array<char, 10> charArray;

    printTypeInfo<decltype(intArray)>();
    printTypeInfo<decltype(doubleArray)>();
    printTypeInfo<decltype(charArray)>();


    return 0;
}