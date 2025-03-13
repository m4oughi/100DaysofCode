#include <iostream>

auto lambda = []() -> int { return 42; };

decltype(auto) getLambdaResult() {
    return lambda(); // Returns 'int'
}

int main() {
    std::cout << "Lambda result: " << getLambdaResult() << std::endl; // Output: 42
    return 0;
}
