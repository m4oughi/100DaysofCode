#include <iostream>
#include <optional>

std::optional<int> findEven(int num) {
    if (num % 2 == 0) {
        return num;
    }
    return std::nullopt;
}

int main() {
    auto result = findEven(4);
    
    if (result) {
        std::cout << "Even number found: " << *result << "\n";
    } else {
        std::cout << "Not an even number\n";
    }

    return 0;
}
