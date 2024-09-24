#include <iostream>

// Function template taking a lambda with generic parameter types
template <typename Func, typename T1, typename T2>
auto execute(Func f, T1 x, T2 y) {
    return f(x, y);
}

int main() {
    // Lambda to concatenate a string and an integer
    auto concat = [](const std::string& str, int num) {
        return str + std::to_string(num);
    };

    // Call the template function with a string and an integer
    std::string result = execute(concat, "Number: ", 42);
    std::cout << result << std::endl; // Outputs: Number: 42

    return 0;
}
