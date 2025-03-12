#include <iostream>

template <typename T1, typename T2>
auto multiply(T1 a, T2 b) -> decltype(a * b) { // Deduce return type using decltype
    return a * b;
}

int main() {
    std::cout << "Multiplication: " << multiply(3, 4.5) << std::endl;
    return 0;
}
