#include <iostream>

// Function template taking a generic lambda
template <typename Func>
void execute(Func f) {
    f(10);      // Calls the lambda with an integer
    f(3.14);    // Calls the lambda with a double
    f("Hello"); // Calls the lambda with a string
}

int main() {
    // Generic lambda that can take any type
    auto print = [](auto value) {
        std::cout << value << std::endl;
    };

    // Pass the generic lambda to the template function
    execute(print);
    // Outputs:
    // 10
    // 3.14
    // Hello

    return 0;
}
