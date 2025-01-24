#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

bool caseInsensitiveCompare(char a, char b) {
    return std::tolower(a) == std::tolower(b);
}

int main() {
    std::string str1 = "Hello World";
    std::string str2 = "hello world";

    auto result = std::mismatch(str1.begin(), str1.end(), str2.begin(), caseInsensitiveCompare);

    if (result.first != str1.end()) {
        std::cout << "Mismatch found at position " << (result.first - str1.begin()) << ": "
                  << *result.first << " (str1) vs " << *result.second << " (str2)." << std::endl;
    } else {
        std::cout << "No mismatch found (case-insensitive)." << std::endl;
    }

    return 0;
}
