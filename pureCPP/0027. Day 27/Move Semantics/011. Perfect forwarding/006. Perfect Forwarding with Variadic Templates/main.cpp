#include <iostream>
#include <utility>

void process(int& x) { std::cout << "Lvalue reference: " << x << std::endl; }
void process(int&& x) { std::cout << "Rvalue reference: " << x << std::endl; }

template <typename... Args>
void forwardArgs(Args&&... args) {
    (process(std::forward<Args>(args)), ...);  // Expands the arguments and forwards them
}

int main() {
    int a = 10;
    forwardArgs(a, 20);  // Pass both lvalue and rvalue
}
