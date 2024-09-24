#include <iostream>
#include <functional>

// Function template taking a std::function
template <typename T>
void execute(std::function<T()> f) {
    std::cout << "Result: " << f() << std::endl;
}

int main() {
    // Lambda to return a constant value
    auto getValue = []() -> int {
        return 42;
    };

    // Call the template function with the lambda wrapped in std::function
    execute<int>(getValue); // Outputs: Result: 42

    return 0;
}
