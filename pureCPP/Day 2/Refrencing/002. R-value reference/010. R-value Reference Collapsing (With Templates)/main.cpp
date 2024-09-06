#include <iostream>

template<typename T>
void process(T&& arg) {
    int &&ref = std::forward<T>(arg);  // ref collapses based on the nature of arg
}

int main() {
    int x = 10;
    process(x);      // L-value passed, collapses to L-value reference
    process(20);     // R-value passed, remains R-value reference

    return 0;
}