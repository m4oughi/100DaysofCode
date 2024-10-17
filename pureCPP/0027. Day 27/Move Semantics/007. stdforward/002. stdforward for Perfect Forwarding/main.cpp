#include <iostream>
#include <utility>

void print(int& x) {
    std::cout << "Lvalue: " << x << std::endl;
}

void print(int&& x) {
    std::cout << "Rvalue: " << x << std::endl;
}

template <typename T>
void perfectForward(T&& val) {
    print(std::forward<T>(val));  // Perfectly forward val
}

int main() {
    int a = 5;
    perfectForward(a);          // Lvalue forwarded
    perfectForward(100);        // Rvalue forwarded
}
