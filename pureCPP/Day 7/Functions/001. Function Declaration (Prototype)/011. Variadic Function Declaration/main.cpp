#include <iostream>
#include <cstdarg>

// Variadic function declaration (prototype)
int sum(int count, ...);

int main() {
    std::cout << sum(4, 1, 2, 3, 4) << std::endl;  // Sum of 1, 2, 3, 4
    return 0;
}

// Function definition
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
