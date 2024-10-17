#include <iostream>
#include <utility>

void process(int& x) {
    std::cout << "Lvalue: " << x << std::endl;
}

void process(int&& x) {
    std::cout << "Rvalue: " << x << std::endl;
}

template <typename... Args>
void forwardAll(Args&&... args) {
    (process(std::forward<Args>(args)), ...);  // Forward each argument
}

int main() {
    int a = 5;
    forwardAll(a, 10, 20);   // Mixed lvalues and rvalues
}
