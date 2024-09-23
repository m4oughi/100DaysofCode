#include <iostream>

// Function template taking a lambda as a parameter
template <typename Func>
void execute(Func f) {
    f();
}

int main() {
    // Lambda to print a message
    auto printMessage = []() {
        std::cout << "Hello, World!" << std::endl;
    };

    // Pass the lambda to the template function
    execute(printMessage); // Outputs: Hello, World!

    return 0;
}
