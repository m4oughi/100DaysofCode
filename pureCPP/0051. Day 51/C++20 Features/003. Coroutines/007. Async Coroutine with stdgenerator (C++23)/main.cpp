#include <iostream>
#include <generator>

std::generator<int> fibonacci(int n) {
    int a = 0, b = 1;
    for (int i = 0; i < n; ++i) {
        co_yield a;
        int next = a + b;
        a = b;
        b = next;
    }
}

int main() {
    for (int num : fibonacci(10)) {
        std::cout << num << " ";
    }
    std::cout << '\n';
}
