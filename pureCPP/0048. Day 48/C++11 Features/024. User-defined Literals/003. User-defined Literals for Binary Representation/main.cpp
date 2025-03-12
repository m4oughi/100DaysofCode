#include <iostream>

constexpr unsigned long long operator"" _bin(const char* str, std::size_t) {
    unsigned long long value = 0;
    while (*str) {
        value = (value << 1) + (*str - '0');
        ++str;
    }
    return value;
}

int main() {
    std::cout << "Binary 1101 is " << 1101_bin << " in decimal\n";
    return 0;
}
