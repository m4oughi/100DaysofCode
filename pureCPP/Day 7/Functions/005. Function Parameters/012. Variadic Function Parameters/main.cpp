#include <iostream>
#include <cstdarg>

// Function declaration with variadic parameters
int sum(int count, ...);

int main() {
    std::cout << "Sum: " << sum(4, 1, 2, 3, 4) << std::endl;  // Function call with varying arguments
    return 0;
}

// Function definition with variadic parameters
int sum(int count, ...) {
    va_list args;
    va_start(args, count);
    int total = 0;
    for (int i = 0; i < count; ++i) {
        total += va_arg(args, int);  // Access each argument
    }
    va_end(args);
    return total;
}
