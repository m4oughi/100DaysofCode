#include <iostream>

template <typename... Args>
void print(Args... args) {
    ((std::cout << args << " "), ...);  // Unary right fold
    std::cout << '\n';
}

int main() {
    print("Hello", 42, 3.14, "World");
    return 0;
}
