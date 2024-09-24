#include <iostream>
#include <utility>

template<typename T>
void wrapper(T&& param) {
    foo(std::forward<T>(param));  // Forwards param as is (L-value or R-value)
}

int main() {
    int x = 60;
    wrapper(x);      // L-value forwarded
    wrapper(70);     // R-value forwarded

    return 0;
}