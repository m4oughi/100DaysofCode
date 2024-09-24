#include <iostream>

int main() {
    auto sum = [](auto... args) {
        return (args + ...);
    };

    std::cout << sum(1, 2, 3, 4, 5) << std::endl;   // Outputs: 15
    std::cout << sum(2.5, 3.5, 4.5) << std::endl;   // Outputs: 10.5
    return 0;
}
