#include <iostream>

constexpr int length(const char* str) {
    return (*str == '\0') ? 0 : 1 + length(str + 1);
}

int main() {
    constexpr int len = length("CompileTime");
    std::cout << "String length: " << len << '\n';  // ✅ String length: 11
}
