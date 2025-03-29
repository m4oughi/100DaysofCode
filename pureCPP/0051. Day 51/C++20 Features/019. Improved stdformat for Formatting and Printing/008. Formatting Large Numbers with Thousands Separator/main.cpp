#include <iostream>
#include <format>

int main() {
    int large_number = 1234567890;
    std::cout << std::format("With separator: {:L}\n", large_number);

    return 0;
}
