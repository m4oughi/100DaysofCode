#include <iostream>
#include <optional>
#include "magic_enum.hpp"

enum class Direction { North, South, East, West };

int main() {
    std::string input = "East";
    auto dirOpt = magic_enum::enum_cast<Direction>(input);

    if (dirOpt.has_value()) {
        std::cout << "Parsed: " << static_cast<int>(dirOpt.value()) << "\n";
    } else {
        std::cout << "Invalid direction string.\n";
    }
}
