#include <iostream>

void process(int& x) { std::cout << "Lvalue reference" << std::endl; }
void process(int&& x) { std::cout << "Rvalue reference" << std::endl; }

template <typename T>
void wrapper(T&& arg) {
    process(std::forward<T>(arg));  // Perfect forwarding
}

int main() {
    int a = 42;
    wrapper(a);      // Calls process(int&), prints "Lvalue reference"
    wrapper(42);     // Calls process(int&&), prints "Rvalue reference"
}
