#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

bool caseInsensitiveCompare(char a, char b) {
    return std::tolower(a) < std::tolower(b);
}

int main() {
    std::string str1 = "Apple";
    std::string str2 = "banana";

    if (std::lexicographical_compare(str1.begin(), str1.end(), str2.begin(), str2.end(), caseInsensitiveCompare)) {
        std::cout << "\"" << str1 << "\" is lexicographically smaller than \"" << str2 << "\" (case-insensitive).\n";
    } else {
        std::cout << "\"" << str1 << "\" is not lexicographically smaller than \"" << str2 << "\" (case-insensitive).\n";
    }
    // Output: "Apple" is lexicographically smaller than "banana" (case-insensitive).
}
