#include <iostream>

// Function template taking a lambda with variadic parameters
template <typename Func, typename... Args>
void execute(Func f, Args... args) {
    f(args...);
}

int main() {
    // Lambda to print multiple arguments
    auto print = [](auto... values) {
        (std::cout << ... << values) << std::endl;
    };

    // Call the template function with multiple arguments
    execute(print, 1, " + ", 2, " = ", 3); // Outputs: 1 + 2 = 3

    return 0;
}
