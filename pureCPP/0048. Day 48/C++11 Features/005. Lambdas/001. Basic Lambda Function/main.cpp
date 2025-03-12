#include <iostream>

int main() {
    auto greet = []() { std::cout << "Hello, Lambda!" << std::endl; };

    greet(); // Call the lambda function

    return 0;
}
