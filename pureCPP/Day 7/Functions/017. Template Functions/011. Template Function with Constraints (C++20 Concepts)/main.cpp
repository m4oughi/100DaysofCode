#include <iostream>

// Concept to constrain the template to arithmetic types
template <typename T>
concept Arithmetic = std::is_arithmetic_v<T>;

template <Arithmetic T>
T add(T a, T b) {
    return a + b;
}

int main() {
    std::cout << "Sum (int): " << add(10, 20) << std::endl;
    std::cout << "Sum (double): " << add(2.5, 3.5) << std::endl;
    
    // std::string str1 = "Hello", str2 = "World";
    // add(str1, str2);  // This will cause a compile-time error

    return 0;
}
