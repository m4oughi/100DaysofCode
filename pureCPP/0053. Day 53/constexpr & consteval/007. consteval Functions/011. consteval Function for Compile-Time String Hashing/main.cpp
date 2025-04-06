#include <iostream>

consteval std::size_t hash(const char* str, std::size_t hashValue = 0) {
    return (*str == '\0') ? hashValue : hash(str + 1, (hashValue * 31) + *str);
}

int main() {
    constexpr std::size_t hashValue = hash("hello");
    std::cout << "Hash of 'hello': " << hashValue << '\n';
    return 0;
}
