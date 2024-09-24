#include <iostream>

template<typename T>
void forward(T&& arg) {
    process(std::forward<T>(arg));  // Perfectly forwards the argument
}

int main() {
    int x = 10;
    forward(x);    // L-value forwarded
    forward(20);   // R-value forwarded

    return 0;
}