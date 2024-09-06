#include <iostream>

template<typename T>
void bind(T&& arg) {
    T& ref = arg;  // T& binds to L-value or R-value depending on the argument
}

int main() {
    int x = 10;
    bind(x);    // Binds as L-value reference
    bind(20);   // Binds as R-value reference

    return 0;
}