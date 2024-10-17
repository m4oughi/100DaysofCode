#include <iostream>

template <typename T1, typename T2>
void forwardArgs(T1&& arg1, T2&& arg2) {
    process(std::forward<T1>(arg1), std::forward<T2>(arg2));
}

void process(int& x, double& y) { std::cout << "Lvalue references: " << x << ", " << y << std::endl; }
void process(int&& x, double&& y) { std::cout << "Rvalue references: " << x << ", " << y << std::endl; }

int main() {
    int a = 10;
    double b = 5.5;
    
    forwardArgs(a, b);         // Lvalues passed
    forwardArgs(20, 7.7);      // Rvalues passed
}
