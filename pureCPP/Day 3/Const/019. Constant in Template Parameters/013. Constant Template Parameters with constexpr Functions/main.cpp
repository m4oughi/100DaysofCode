#include <iostream>

template <int N>
constexpr int square() {
    return N * N;
}

int main() {
    std::cout << "Square of 7: " << square<7>() << std::endl; // Prints 49
}
