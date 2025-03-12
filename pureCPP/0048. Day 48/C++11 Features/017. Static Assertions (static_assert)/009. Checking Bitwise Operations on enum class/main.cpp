#include <iostream>

enum class Flags : unsigned int {
    Read = 1 << 0,
    Write = 1 << 1,
    Execute = 1 << 2
};

static_assert(static_cast<unsigned int>(Flags::Read) == 1, "Unexpected value for Read flag");

int main() {
    std::cout << "Enum flag validation passed!\n";
    return 0;
}
