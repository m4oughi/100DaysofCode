#include <iostream>
#include <array>
#include <type_traits>

// Function template with SFINAE for checking if array elements are integral types
template <typename T>
typename std::enable_if<std::is_integral<typename T::value_type>::value, void>::type
printIfIntegral(const T& arr) {
    std::cout << "Array has integral types." << std::endl;
}

int main() {
    std::array<int, 3> intArray = {1, 2, 3};
    printIfIntegral(intArray);  // Valid: Elements are integral

    std::array<double, 3> doubleArray = {1.0, 2.0, 3.0};
    // printIfIntegral(doubleArray);  // Error: Elements are not integral (commented out)


    return 0;
}