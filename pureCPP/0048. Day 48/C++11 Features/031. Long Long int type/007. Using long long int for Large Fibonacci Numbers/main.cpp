#include <iostream>

void fibonacci(int n) {
    long long int a = 0, b = 1, temp;
    for (int i = 0; i < n; ++i) {
        std::cout << a << " ";
        temp = a + b;
        a = b;
        b = temp;
    }
    std::cout << std::endl;
}

int main() {
    int terms = 20;
    std::cout << "Fibonacci Series up to " << terms << " terms:\n";
    fibonacci(terms);
    return 0;
}
