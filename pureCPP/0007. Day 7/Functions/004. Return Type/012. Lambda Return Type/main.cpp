#include <iostream>

int main() {
    // Lambda function returning square of a number
    auto square = [](int x) -> int {
        return x * x;
    };
    
    std::cout << "Square: " << square(5) << std::endl;  // Call lambda function
    return 0;
}
