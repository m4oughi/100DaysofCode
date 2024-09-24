#include <iostream>

// Function template taking a lambda with captured variables
template <typename Func>
void execute(Func f) {
    f();
}

int main() {
    int a = 10;
    int b = 20;

    // Lambda capturing external variables by reference
    auto sum = [&]() {
        std::cout << "Sum: " << a + b << std::endl;
    };

    // Call the template function with the capturing lambda
    execute(sum); // Outputs: Sum: 30

    return 0;
}
