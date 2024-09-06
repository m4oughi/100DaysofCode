#include <iostream>
#include <type_traits>

template<typename T>
typename std::enable_if<std::is_lvalue_reference<T>::value, void>::type
processValue(T&& value) {
    std::cout << "lvalue reference" << std::endl;
}

template<typename T>
typename std::enable_if<!std::is_lvalue_reference<T>::value, void>::type
processValue(T&& value) {
    std::cout << "rvalue reference" << std::endl;
}

int main() {
    int x = 70;
    processValue(x);      // lvalue reference
    processValue(80);     // rvalue reference

    return 0;
}
