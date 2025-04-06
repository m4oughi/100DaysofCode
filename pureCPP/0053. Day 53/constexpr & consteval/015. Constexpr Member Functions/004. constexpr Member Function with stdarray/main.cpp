#include <iostream>
#include <array>

class Fibonacci {
public:
    constexpr static int compute(int n) {
        return (n <= 1) ? n : compute(n - 1) + compute(n - 2);
    }
};

int main() {
    constexpr std::array<int, 6> fibArray = {Fibonacci::compute(0), Fibonacci::compute(1),
                                             Fibonacci::compute(2), Fibonacci::compute(3),
                                             Fibonacci::compute(4), Fibonacci::compute(5)};

    for (constexpr int val : fibArray)
        std::cout << val << " ";

    std::cout << '\n';
}
