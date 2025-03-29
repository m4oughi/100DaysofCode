#include <vector>
#include <iostream>

constexpr std::vector<int> generate_fibonacci(int n) {
    std::vector<int> fib = {0, 1};
    for (int i = 2; i < n; ++i) {
        fib.push_back(fib[i - 1] + fib[i - 2]);
    }
    return fib;
}

int main() {
    constexpr std::vector<int> fibonacci = generate_fibonacci(10);

    for (int num : fibonacci) {
        std::cout << num << " ";
    }
}
