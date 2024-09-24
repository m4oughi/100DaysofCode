#include <iostream>

template<typename T>
void foo(T&& param) {
    // param collapses based on T
}

int main() {
    int x = 40;
    foo(x);    // T is int&, param is int& (L-value reference)
    foo(50);   // T is int, param is int&& (R-value reference)

    return 0;
}