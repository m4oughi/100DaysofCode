#include <iostream>
#include <stdexcept>

template <typename T>
void maybeThrow() noexcept(std::is_integral<T>::value) {
    if (!std::is_integral<T>::value) {
        throw std::runtime_error("Only non-integral types throw an exception");
    } else {
        std::cout << "Integral type, no exception thrown" << std::endl;
    }
}

int main() {
    try {
        maybeThrow<int>();  // Integral type, no throw
    } catch (...) {
        std::cout << "Caught unexpected exception!" << std::endl;
    }

    try {
        maybeThrow<double>();  // Non-integral type, throws
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}
