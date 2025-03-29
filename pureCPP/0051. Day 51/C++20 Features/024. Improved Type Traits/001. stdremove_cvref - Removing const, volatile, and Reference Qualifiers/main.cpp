#include <iostream>
#include <type_traits>

template <typename T>
void printType() {
    std::cout << typeid(typename std::remove_cvref<T>::type).name() << "\n";
}

int main() {
    printType<const int&>();  // Output: int
    printType<volatile double&&>();  // Output: double
    return 0;
}
