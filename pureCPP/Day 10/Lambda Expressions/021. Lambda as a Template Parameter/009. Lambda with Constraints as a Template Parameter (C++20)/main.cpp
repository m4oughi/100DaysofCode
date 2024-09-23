#include <iostream>
#include <concepts>

// Concept definition
template <typename T>
concept Addable = requires(T a, T b) {
    a + b;
};

// Function template taking a lambda constrained by a concept
template <typename Func>
void execute(Func f) requires std::invocable<Func, int, int> {
    f(10, 20); // Invoke with integers
}

int main() {
    // Lambda to add two numbers
    auto add = [](int a, int b) {
        std::cout << "Sum: " << a + b << std::endl;
    };

    // Call the template function with the constrained lambda
    execute(add); // Outputs: Sum: 30

    return 0;
}
