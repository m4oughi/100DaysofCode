#include <iostream>

// Function template returning the result of the lambda
template <typename Func, typename T>
T calculate(Func f, T x, T y) {
    return f(x, y);
}

int main() {
    // Lambda to multiply two numbers
    auto multiply = [](int a, int b) {
        return a * b;
    };

    // Call the template function and store the result
    int result = calculate(multiply, 4, 5);
    std::cout << "Product: " << result << std::endl; // Outputs: Product: 20

    return 0;
}
