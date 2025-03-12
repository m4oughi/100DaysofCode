#include <iostream>
#include <cstdint>

static_assert(sizeof(int64_t) == 8, "int64_t should be 8 bytes!");

int main() {
    std::cout << "Size check passed!\n";
    return 0;
}
