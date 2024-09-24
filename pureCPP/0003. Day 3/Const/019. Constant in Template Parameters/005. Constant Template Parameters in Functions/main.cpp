#include <iostream>

template <int N>
void print() {
    std::cout << "Value: " << N << std::endl; // Prints the constant parameter value
}

int main() {
    print<100>(); // Prints "Value: 100"
}
