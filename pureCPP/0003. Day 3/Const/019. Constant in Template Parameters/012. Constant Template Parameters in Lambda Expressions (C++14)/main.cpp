#include <iostream>

template <int N>
void useLambda() {
    auto lambda = []() {
        std::cout << "Constant parameter: " << N << std::endl; // Prints N
    };
    lambda();
}

int main() {
    useLambda<50>(); // Prints "Constant parameter: 50"
}
