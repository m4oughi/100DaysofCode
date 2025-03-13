#include <iostream>
#include <array>
#include <utility>

constexpr std::size_t fibonacci(std::size_t N) {
    return (N <= 1) ? N : fibonacci(N - 1) + fibonacci(N - 2);
}

template <std::size_t... Indices>
constexpr std::array<std::size_t, sizeof...(Indices)> generateFibonacci(std::index_sequence<Indices...>) {
    return {fibonacci(Indices)...};
}

int main() {
    constexpr auto fibArray = generateFibonacci(std::make_index_sequence<10>{});

    for (auto val : fibArray) {
        std::cout << val << " ";
    }
    std::cout << std::endl; // Output: 0 1 1 2 3 5 8 13 21 34
    return 0;
}
