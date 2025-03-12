#include <iostream>

void process(int&& x) { 
    std::cout << "Rvalue reference: " << x << std::endl; 
}

int main() {
    process(42); // Passes an rvalue
    // int a = 10;
    // process(a); // Error: lvalue cannot bind to rvalue reference

    return 0;
}
