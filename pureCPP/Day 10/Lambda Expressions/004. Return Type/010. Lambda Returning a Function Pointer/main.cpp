#include <iostream>

// Function to be returned by the lambda
int add(int a, int b) {
    return a + b;
}

int main() {
    // Lambda returning a pointer to a function
    auto returnFunctionPointer = []() -> int(*)(int, int) {
        return add;
    };
    auto func = returnFunctionPointer();
    std::cout << "Sum using function pointer: " << func(3, 4) << std::endl; // Outputs: Sum using function pointer: 7
    return 0;
}
