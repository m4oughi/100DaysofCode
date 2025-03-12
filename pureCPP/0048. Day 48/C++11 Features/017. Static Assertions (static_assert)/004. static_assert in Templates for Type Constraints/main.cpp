#include <iostream>
#include <type_traits>

template <typename T>
void processNumber(T value) {
    static_assert(std::is_integral<T>::value, "T must be an integral type");
    std::cout << "Processing number: " << value << "\n";
}

int main() {
    processNumber(42);
    // processNumber(3.14); // Compilation error
    return 0;
}
