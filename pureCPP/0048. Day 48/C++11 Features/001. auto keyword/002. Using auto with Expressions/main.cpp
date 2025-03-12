#include <iostream>

int main() {
    int x = 5, y = 10;
    auto sum = x + y;  // int
    auto product = x * 2.5; // double (since 2.5 is double)

    std::cout << "Sum: " << sum << ", Product: " << product << std::endl;
    return 0;
}
