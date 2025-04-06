#include <iostream>

constexpr unsigned int hash(const char* str, unsigned int h = 0) {
    return (*str == '\0') ? h : hash(str + 1, (h * 31) + *str);
}

int main() {
    constexpr unsigned int hashValue = hash("hello");
    std::cout << "Hash of \"hello\": " << hashValue << '\n';
    return 0;
}
