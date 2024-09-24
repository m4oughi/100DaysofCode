#include <iostream>
#include <type_traits>

// Enable if function only if T is an integral type
template <typename T>
typename std::enable_if<std::is_integral<T>::value, void>::type
checkType(T value) {
    std::cout << value << " is an integral type" << std::endl;
}

// Enable if function only if T is a floating-point type
template <typename T>
typename std::enable_if<std::is_floating_point<T>::value, void>::type
checkType(T value) {
    std::cout << value << " is a floating-point type" << std::endl;
}

int main() {
    checkType(5);     // Calls the integral version
    checkType(3.14);  // Calls the floating-point version
    
    return 0;
}
