#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

bool caseInsensitiveCompare(char a, char b) {
    return std::tolower(a) == std::tolower(b);
}

int main() {
    std::string text = "Hello World, hello Universe";
    std::string word = "hello";

    auto it = std::find_end(text.begin(), text.end(), word.begin(), word.end(), caseInsensitiveCompare);

    if (it != text.end()) {
        std::cout << "Last occurrence of '" << word << "' found (case-insensitive) at index: " 
                  << std::distance(text.begin(), it) << std::endl;
    } else {
        std::cout << "Substring not found." << std::endl;
    }

    return 0;
}
