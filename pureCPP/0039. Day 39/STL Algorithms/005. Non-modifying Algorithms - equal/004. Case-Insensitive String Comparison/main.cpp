#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

bool caseInsensitiveCompare(char a, char b) {
    return std::tolower(a) == std::tolower(b);
}

int main() {
    std::string str1 = "Hello";
    std::string str2 = "hello";

    bool isEqual = std::equal(str1.begin(), str1.end(), str2.begin(), caseInsensitiveCompare);

    std::cout << (isEqual ? "Strings are equal (case-insensitive)." : "Strings are not equal.") << std::endl;

    return 0;
}
