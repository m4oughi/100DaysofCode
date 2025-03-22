#include <iostream>
#include <optional>

std::optional<int> getNumber(bool giveNumber) {
    if (giveNumber) return 42;
    return std::nullopt;
}

int main() {
    std::optional<int> num = getNumber(true);
    if (num) {
        std::cout << "Value: " << *num << '\n';
    } else {
        std::cout << "No value\n";
    }

    return 0;
}
