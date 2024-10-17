#include <iostream>

template <typename T>
void delegate(T&& t) {
    doWork(std::forward<T>(t));  // Perfect forwarding to another function
}

template <typename T>
void doWork(T&& t) {
    process(std::forward<T>(t));  // Forwarding to process function
}

void process(int& x) { std::cout << "Processing lvalue reference: " << x << std::endl; }
void process(int&& x) { std::cout << "Processing rvalue reference: " << x << std::endl; }

int main() {
    int x = 42;
    delegate(x);        // Lvalue reference forwarded through multiple functions
    delegate(42);       // Rvalue reference forwarded through multiple functions
}
