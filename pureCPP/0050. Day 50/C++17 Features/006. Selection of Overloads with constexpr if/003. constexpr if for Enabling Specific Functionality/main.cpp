#include <iostream>

template <typename T>
void showSize(T value) {
    if constexpr (sizeof(T) > 4) {
        std::cout << "Size is large: " << sizeof(T) << " bytes\n";
    } else {
        std::cout << "Size is small: " << sizeof(T) << " bytes\n";
    }
}

int main() {
    showSize(10);     // Output: Size is small: 4 bytes
    showSize(3.14);   // Output: Size is large: 8 bytes
    return 0;
}
