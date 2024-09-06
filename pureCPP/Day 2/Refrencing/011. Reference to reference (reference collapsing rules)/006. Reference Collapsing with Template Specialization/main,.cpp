#include <iostream>
#include <type_traits>

template<typename T>
struct ReferenceType {
    using Type = T;
};

template<typename T>
struct ReferenceType<T&> {
    using Type = T&;
};

template<typename T>
struct ReferenceType<T&&> {
    using Type = T&&;
};

template<typename T>
void checkReference() {
    using RefType = typename ReferenceType<T>::Type;
    
    if constexpr (std::is_lvalue_reference_v<RefType>) {
        std::cout << "L-value reference type" << std::endl;
    } else {
        std::cout << "R-value reference type" << std::endl;
    }
}

int main() {
    checkReference<int>();         // Output: R-value reference type
    checkReference<int&>();        // Output: L-value reference type
    checkReference<int&&>();       // Output: R-value reference type

    return 0;
}