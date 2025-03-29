#include <iostream>
#include <type_traits>

template <typename T, typename = std::enable_if_t<std::is_integral_v<T> && !std::is_const_v<T>>>
void printInteger(T value) {
    std::cout << "Integer value: " << value << "\n";
}

int main() {
    printInteger(42);    // OK
    // printInteger("Hello");  // Error: Not an integer
    return 0;
}
