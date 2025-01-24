#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string text = "hello world";
    std::string pattern = "world";

    auto it = std::search(text.begin(), text.end(), pattern.begin(), pattern.end());

    if (it != text.end()) {
        std::cout << "Substring found at position: " << std::distance(text.begin(), it) << std::endl;
    } else {
        std::cout << "Substring not found." << std::endl;
    }

    return 0;
}
