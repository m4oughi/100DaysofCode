#include <iostream>

template <typename T>
void printSize() {
    if constexpr (sizeof(T) == 1) {
        std::cout << "Small type (1 byte)\n";
    } else if constexpr (sizeof(T) == 4) {
        std::cout << "Medium type (4 bytes)\n";
    } else {
        std::cout << "Large type (" << sizeof(T) << " bytes)\n";
    }
}

int main() {
    printSize<char>();   // ✅ Small type (1 byte)
    printSize<int>();    // ✅ Medium type (4 bytes)
    printSize<double>(); // ✅ Large type (8 bytes)
}
