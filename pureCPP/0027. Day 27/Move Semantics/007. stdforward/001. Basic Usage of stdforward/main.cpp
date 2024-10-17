#include <iostream>
#include <utility>

void print(int& x) {
    std::cout << "Lvalue: " << x << std::endl;
}

void print(int&& x) {
    std::cout << "Rvalue: " << x << std::endl;
}

template <typename T>
void forwardExample(T&& val) {
    print(std::forward<T>(val));  // Forward value based on its type
}

int main() {
    int x = 10;
    forwardExample(x);          // Lvalue is forwarded
    forwardExample(20);         // Rvalue is forwarded
}
