#include <iostream>

template<typename T>
void aliasingFunction(T &&param) {
    T &alias = param;  // Reference collapsing: param is a reference
    alias += 5;  // Modify the original value through alias
}

int main() {
    int x = 5;
    aliasingFunction(x);  // T is int&, aliasing occurs
    std::cout << x << std::endl;  // Output: 10

    return 0;
}