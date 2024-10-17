#include <utility>
#include <iostream>

template<typename T>
void wrapper(T&& arg) {
    process(std::forward<T>(arg));  // Perfect forwarding preserves Lvalue or Rvalue nature
}

void process(int &lref) {
    std::cout << "Lvalue reference" << std::endl;
}

void process(int &&rref) {
    std::cout << "Rvalue reference" << std::endl;
}

int main() {
    int x = 5;
    wrapper(x);      // Calls Lvalue reference version
    wrapper(10);     // Calls Rvalue reference version
    return 0;
}
