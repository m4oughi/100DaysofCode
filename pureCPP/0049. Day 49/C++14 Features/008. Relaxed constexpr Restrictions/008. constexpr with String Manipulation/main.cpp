#include <iostream>
#include <string>

constexpr int countChars(const char* str) {
    int count = 0;
    while (*str++) {
        count++;
    }
    return count;
}

int main() {
    constexpr int length = countChars("Hello, constexpr!");
    std::cout << "String length: " << length << std::endl; // Output: 17
    return 0;
}
