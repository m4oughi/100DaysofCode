#include <iostream>
#include <format>

int main() {
    double pi = 3.14159265358979;

    std::cout << std::format("Default: {}\n", pi);
    std::cout << std::format("Fixed (2 decimals): {:.2f}\n", pi);
    std::cout << std::format("Scientific: {:.2e}\n", pi);
    std::cout << std::format("General format: {:.2g}\n", pi);

    return 0;
}
