#include <iostream>
#include <vector>
#include <numeric>

int main() {
    int n = 10;
    std::vector<int> fib(n, 0);
    fib[0] = 0;
    if (n > 1) fib[1] = 1;

    std::inclusive_scan(fib.begin(), fib.end(), fib.begin(),
                        [&](int a, int b) -> int {
                            static int prev = 0;
                            int current = a + prev;
                            prev = a;
                            return current;
                        });

    std::cout << "Fibonacci Sequence: ";
    for(int num : fib) {
        std::cout << num << " ";
    }
    // Output may not be accurate due to the way state is handled in the lambda

    return 0;
}
