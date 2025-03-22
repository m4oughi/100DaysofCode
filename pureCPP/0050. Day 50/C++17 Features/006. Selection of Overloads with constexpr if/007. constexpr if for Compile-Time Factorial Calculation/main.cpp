#include <iostream>

template <int N>
constexpr int factorial() {
    if constexpr (N == 0) {
        return 1;
    } else {
        return N * factorial<N - 1>();
    }
}

int main() {
    std::cout << "Factorial of 5: " << factorial<5>() << '\n'; // Output: 120
    return 0;
}
