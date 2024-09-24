#include <iostream>

template<typename... Args>
void print(Args... args) {
    (std::cout << ... << args) << std::endl;  // Fold expression
}

int main() {
    print(1, 2.5, "Hello", 'A');
    print("Variadic", "template", "in", "C++");

    return 0;
}
