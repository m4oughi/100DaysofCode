#include <iostream>

template<typename T>
void func(T&& arg) {
    T& ref = arg;  // Collapses to either L-value or R-value reference
}

int main() {
    int x = 10;
    func(x);     // T& collapses to int&
    func(20);    // T&& collapses to int&&

    return 0;
}