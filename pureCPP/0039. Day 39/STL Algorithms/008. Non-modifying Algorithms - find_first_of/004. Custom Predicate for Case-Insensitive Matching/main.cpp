#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

bool caseInsensitiveCompare(char a, char b) {
    return std::tolower(a) == std::tolower(b);
}

int main() {
    std::string text = "Hello World";
    std::string chars = "wxyz";

    auto it = std::find_first_of(text.begin(), text.end(), chars.begin(), chars.end(), caseInsensitiveCompare);

    if (it != text.end()) {
        std::cout << "First matching character (case-insensitive): " << *it << " at index: " 
                  << std::distance(text.begin(), it) << std::endl;
    } else {
        std::cout << "No matching characters found." << std::endl;
    }

    return 0;
}
