#include <iostream>
#include <type_traits>

template<typename T>
void printIfIntegral(T value) {
    if constexpr (std::is_integral<T>::value) {
        std::cout << value << " is integral." << std::endl;
    } else {
        std::cout << value << " is not integral." << std::endl;
    }
}

template<typename... Args>
void checkTypes(Args... args) {
    (printIfIntegral(args), ...);  // Call printIfIntegral for each argument
}

int main() {
    checkTypes(1, 2.5, "Hello", 'A', true);
    
    return 0;
}
