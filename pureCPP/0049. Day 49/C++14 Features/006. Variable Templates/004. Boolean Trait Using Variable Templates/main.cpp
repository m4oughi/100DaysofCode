#include <iostream>
#include <type_traits>

template<typename T>
constexpr bool is_pointer_v = std::is_pointer<T>::value;

int main() {
    std::cout << std::boolalpha;
    std::cout << "Is int* a pointer? " << is_pointer_v<int*> << std::endl;   // true
    std::cout << "Is int a pointer? " << is_pointer_v<int> << std::endl;     // false

    return 0;
}
