#include <iostream>
#include <utility>

void process(int& x) {
    std::cout << "Lvalue reference: " << x << "\n";
}

void process(int&& x) {
    std::cout << "Rvalue reference: " << x << "\n";
}

template <typename T>
void forwardToProcess(T&& arg) {
    process(std::forward<T>(arg));
}

int main() {
    int a = 10;
    forwardToProcess(a);        // Calls lvalue overload
    forwardToProcess(20);       // Calls rvalue overload

    return 0;
}
