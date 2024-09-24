#include <iostream>

int main() {
    // Lambda that takes two integer parameters and prints their sum
    [](int a, int b) { std::cout << "Sum: " << a + b << std::endl; }(5, 3);
    return 0;
}
