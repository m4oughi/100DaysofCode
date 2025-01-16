#include <iostream>
#include <array>

int main() {
    std::array<int, 3> numbers = {10, 20, 30};

    std::cout << "First element (using at()): " << numbers.at(0) << "\n";
    std::cout << "Second element (using []): " << numbers[1] << "\n";

    return 0;
}
