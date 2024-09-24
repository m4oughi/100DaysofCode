#include <iostream>

template<typename T>
struct Holder {
    Holder(T&& param) : value(std::forward<T>(param)) {}

    T value;
};

// Deduction guide for L-value references
Holder(int&) -> Holder<int&>;

// Deduction guide for R-value references
Holder(int&&) -> Holder<int&&>;

int main() {
    int x = 160;
    Holder h1(x);         // Deduction uses Holder<int&>
    Holder h2(170);       // Deduction uses Holder<int&&>

    return 0;
}