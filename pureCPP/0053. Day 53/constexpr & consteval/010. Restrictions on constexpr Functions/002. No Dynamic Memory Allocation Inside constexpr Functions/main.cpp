#include <iostream>

constexpr int* allocateMemory() {
    // return new int(10); ❌ ERROR: `new` is not allowed in `constexpr` functions.
    return nullptr;
}

int main() {
    constexpr int* ptr = allocateMemory();
    return 0;
}
