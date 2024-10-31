#include <iostream>
#include <type_traits>

template<typename T>
void maybeThrow() noexcept(std::is_integral<T>::value) {
    if (!std::is_integral<T>::value) {
        std::cout << "Throwing because type is not integral." << std::endl;
        throw std::runtime_error("Exception: Non-integral type");
    } else {
        std::cout << "No exception thrown because type is integral." << std::endl;
    }
}

int main() {
    maybeThrow<int>();  // Integral, will not throw
    try {
        maybeThrow<double>();  // Non-integral, will throw
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
    return 0;
}
