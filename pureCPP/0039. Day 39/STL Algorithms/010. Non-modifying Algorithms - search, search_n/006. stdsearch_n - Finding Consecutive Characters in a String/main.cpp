#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string text = "aaabbbccc";

    auto it = std::search_n(text.begin(), text.end(), 3, 'b');

    if (it != text.end()) {
        std::cout << "Found 3 consecutive 'b's starting at index: " << std::distance(text.begin(), it) << std::endl;
    } else {
        std::cout << "No consecutive characters found." << std::endl;
    }

    return 0;
}
