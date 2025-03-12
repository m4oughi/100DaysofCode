#include <iostream>

static_assert(sizeof(int) == 4, "Expected int to be 4 bytes");

int main() {
    std::cout << "Code compiled successfully!\n";
    return 0;
}
