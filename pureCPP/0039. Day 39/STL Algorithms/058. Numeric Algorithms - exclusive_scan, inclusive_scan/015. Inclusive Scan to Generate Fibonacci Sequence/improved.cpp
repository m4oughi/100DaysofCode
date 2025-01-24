#include <iostream>
#include <vector>
#include <numeric>

int main() {
    int n = 10;
    std::vector<int> fib(n, 0);
    fib[0] = 0;
    if (n > 1) fib[1] = 1;

    for(int i = 2; i < n; ++i) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    std::cout << "Fibonacci Sequence: ";
    for(int num : fib) {
        std::cout << num << " ";
    }
    // Output: 0 1 1 2 3 5 8 13 21 34

    return 0;
}
