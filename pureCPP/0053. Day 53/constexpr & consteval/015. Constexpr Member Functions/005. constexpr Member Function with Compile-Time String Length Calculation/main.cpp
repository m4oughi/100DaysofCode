#include <iostream>

class StringUtils {
public:
    constexpr static size_t length(const char* str) {
        return (*str == '\0') ? 0 : 1 + length(str + 1);
    }
};

int main() {
    constexpr size_t len = StringUtils::length("Hello, constexpr!");
    std::cout << "String length: " << len << '\n';
}
