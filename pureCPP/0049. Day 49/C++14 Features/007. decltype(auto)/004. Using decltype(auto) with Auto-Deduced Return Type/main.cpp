#include <iostream>

int foo() {
    return 42;
}

decltype(auto) bar() {
    return foo(); // Deduces 'int'
}

int main() {
    std::cout << "bar(): " << bar() << std::endl; // Output: 42
    return 0;
}
