#include <iostream>
#include <functional>

// Function to be bound
int multiply(int a, int b) { return a * b; }

int main() {
    auto boundFunc = std::bind(multiply, 5, std::placeholders::_1);  // Bind first parameter

    std::cout << "Bound function result: " << boundFunc(10) << std::endl;  // Calls multiply(5, 10)
    return 0;
}
