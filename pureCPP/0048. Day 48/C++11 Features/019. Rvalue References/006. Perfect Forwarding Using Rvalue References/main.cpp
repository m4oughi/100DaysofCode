#include <iostream>
#include <utility>

template <typename T>
void forwarder(T&& arg) {
    process(std::forward<T>(arg));
}

void process(int& x) { std::cout << "Lvalue reference\n"; }
void process(int&& x) { std::cout << "Rvalue reference\n"; }

int main() {
    int a = 10;
    forwarder(a);   // Calls lvalue reference function
    forwarder(20);  // Calls rvalue reference function

    return 0;
}
