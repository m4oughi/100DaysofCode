#include <iostream>
#include <optional>

int main() {
    // Lambda returning an optional value
    auto findEven = [](int n) -> std::optional<int> {
        if (n % 2 == 0)
            return n;
        else
            return std::nullopt; // No value returned
    };
    auto result = findEven(4);
    if (result)
        std::cout << "Even number found: " << *result << std::endl; // Outputs: Even number found: 4
    else
        std::cout << "No even number found" << std::endl;
    return 0;
}
