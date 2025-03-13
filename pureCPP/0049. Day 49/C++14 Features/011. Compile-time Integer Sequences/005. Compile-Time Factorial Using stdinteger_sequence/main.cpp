#include <iostream>
#include <utility>

template <std::size_t... Ns>
constexpr std::size_t factorialHelper(std::integer_sequence<std::size_t, Ns...>) {
    return (... * (Ns + 1)); // Fold expression
}

constexpr std::size_t factorial(std::size_t N) {
    return factorialHelper(std::make_integer_sequence<std::size_t, N>{});
}

int main() {
    std::cout << "Factorial of 5: " << factorial(5) << std::endl; // Output: 120
    return 0;
}
