#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> words = {"C++", "STL", "Range-for"};

    for (const std::string& word : words) { // Use `const` to avoid modification
        std::cout << word << " ";
    }

    return 0;
}
