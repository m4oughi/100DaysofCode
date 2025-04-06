#include <iostream>
#include <array>

constexpr std::array<int, 5> primeNumbers = {2, 3, 5, 7, 11};

constexpr bool isPrime(int n) {
    for (int prime : primeNumbers) {
        if (prime == n) return true;
    }
    return false;
}

int main() {
    constexpr bool check = isPrime(7);
    std::cout << "Is 7 prime? " << std::boolalpha << check << '\n';
}
