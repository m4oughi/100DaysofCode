#include <iostream>
#include <vector>

template <typename T>
void process(T value) {
    if constexpr (std::is_pointer_v<T>) {
        std::cout << "Pointer detected, value: " << *value << '\n';
    } else {
        std::cout << "Not a pointer, value: " << value << '\n';
    }
}

int main() {
    int x = 10;
    process(x);   // ✅ Not a pointer, value: 10
    process(&x);  // ✅ Pointer detected, value: 10
}
