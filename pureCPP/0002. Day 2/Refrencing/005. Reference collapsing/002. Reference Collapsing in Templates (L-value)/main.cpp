#include <iostream>

template<typename T>
void foo(T& param) {
    // param collapses based on the reference type
}

int main() {
    int x = 30;
    foo(x);  // T is int, param is int&

    return 0;
}