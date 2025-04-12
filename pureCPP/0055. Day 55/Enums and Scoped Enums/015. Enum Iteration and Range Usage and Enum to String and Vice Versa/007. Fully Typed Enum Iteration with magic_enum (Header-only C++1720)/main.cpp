#include <iostream>
#include "magic_enum.hpp"

enum class Mode {
    Normal,
    Safe,
    Debug
};

int main() {
    for (auto mode : magic_enum::enum_values<Mode>()) {
        std::cout << magic_enum::enum_name(mode) << "\n";
    }
}
