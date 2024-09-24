#include <iostream>

// Helper function to print variadic arguments
void print() {}

template<typename T, typename... Args>
void print(T first, Args... args) {
    std::cout << first << " ";
    print(args...);
}

int main() {
    // Lambda with parameter pack to handle multiple arguments
    auto variadicLambda = [](auto... args) {
        print(args...);
    };
    variadicLambda(1, 2.5, "Hello", 'A'); // Outputs 1 2.5 Hello A 
    return 0;
}
