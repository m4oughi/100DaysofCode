#include <iostream>

// Generic function that forwards arguments to another function
template <typename T>
void forward(T&& arg) {
    process(std::forward<T>(arg));
}

void process(int& x) { std::cout << "Lvalue reference" << std::endl; }
void process(int&& x) { std::cout << "Rvalue reference" << std::endl; }

int main() {
    int x = 10;
    forward(x);          // Lvalue passed, should print "Lvalue reference"
    forward(10);         // Rvalue passed, should print "Rvalue reference"
}
