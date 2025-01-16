#include <iostream>
#include <array>

int main() {
    std::array<int, 4> numbers = {10, 20, 30, 40};

    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    return 0;
}
