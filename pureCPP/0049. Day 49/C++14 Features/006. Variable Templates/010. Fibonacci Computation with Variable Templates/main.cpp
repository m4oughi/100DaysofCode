#include <iostream>

template<int N>
constexpr int fibonacci = fibonacci<N - 1> + fibonacci<N - 2>;

template<>
constexpr int fibonacci<0> = 0;

template<>
constexpr int fibonacci<1> = 1;

int main() {
    std::cout << "Fibonacci(10): " << fibonacci<10> << std::endl; // Output: 55
    std::cout << "Fibonacci(15): " << fibonacci<15> << std::endl; // Output: 610

    return 0;
}
