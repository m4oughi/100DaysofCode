#include <iostream>

// Function template taking a lambda with parameters as a template parameter
template <typename Func>
void execute(Func f, int x, int y) {
    f(x, y);
}

int main() {
    // Lambda to add two numbers
    auto add = [](int a, int b) {
        std::cout << "Sum: " << a + b << std::endl;
    };

    // Pass the lambda to the template function with arguments
    execute(add, 3, 5); // Outputs: Sum: 8

    return 0;
}
