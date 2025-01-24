#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> fib;
    int a = 0, b = 1;

    std::generate_n(std::back_inserter(fib), 10, [&]() {
        int next = a + b;
        a = b;
        b = next;
        return a;
    });

    std::cout << "Generated Fibonacci sequence: ";
    for (int val : fib) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
