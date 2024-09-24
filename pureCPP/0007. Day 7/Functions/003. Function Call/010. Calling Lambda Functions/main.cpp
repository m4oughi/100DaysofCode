#include <iostream>

int main() {
    // Lambda function definition and call
    auto square = [](int x) -> int {
        return x * x;
    };
    
    std::cout << square(5) << std::endl;  // Lambda function call
    return 0;
}
