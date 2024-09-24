#include <iostream>

template<typename T>
void forwardReference(T&& arg) {
    // arg can bind to both L-value and R-value
}

int main() {
    int x = 10;
    forwardReference(x);  // L-value
    forwardReference(20); // R-value

    return 0;
}