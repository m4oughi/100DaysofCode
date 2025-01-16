#include <iostream>
#include <array>

int main() {
    std::array<int, 5> numbers = {1, 2, 3, 4, 5};

    std::cout << "Size: " << numbers.size() << "\n";
    std::cout << "Maximum Size: " << numbers.max_size() << "\n";

    return 0;
}
