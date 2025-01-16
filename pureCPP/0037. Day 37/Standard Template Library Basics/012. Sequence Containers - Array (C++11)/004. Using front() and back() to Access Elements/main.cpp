#include <iostream>
#include <array>

int main() {
    std::array<int, 5> numbers = {10, 20, 30, 40, 50};

    std::cout << "First element: " << numbers.front() << "\n";
    std::cout << "Last element: " << numbers.back() << "\n";

    return 0;
}
