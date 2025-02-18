#include <iostream>
#include <stack>

int main() {
    std::stack<int> fib;
    int n1 = 0, n2 = 1, n3, count = 5;

    fib.push(n1);
    fib.push(n2);

    for (int i = 2; i < count; ++i) {
        n3 = n1 + n2;
        fib.push(n3);
        n1 = n2;
        n2 = n3;
    }

    std::cout << "Fibonacci sequence stored in stack: ";
    while (!fib.empty()) {
        std::cout << fib.top() << " ";
        fib.pop();
    }
    std::cout << std::endl;

    return 0;
}
