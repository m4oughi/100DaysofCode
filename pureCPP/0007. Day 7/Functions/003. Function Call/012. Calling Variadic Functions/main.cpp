#include <iostream>
#include <cstdarg>

// Variadic function declaration
int sum(int count, ...);

int main() {
    std::cout << sum(4, 1, 2, 3, 4) << std::endl;  // Calls variadic function
    return 0;
}

// Variadic function definition
int sum(int count, ...) {
    va_list args;
    va_start(args, count);
    int total = 0;
    for (int i = 0; i < count; ++i) {
        total += va_arg(args, int);
    }
    va_end(args);
    return total;
}
