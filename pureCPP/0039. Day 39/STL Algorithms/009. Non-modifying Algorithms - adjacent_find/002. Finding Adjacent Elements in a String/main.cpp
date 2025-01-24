#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string text = "hello world";

    auto it = std::adjacent_find(text.begin(), text.end());

    if (it != text.end()) {
        std::cout << "First adjacent duplicate character: " << *it << " at index: " << std::distance(text.begin(), it) << std::endl;
    } else {
        std::cout << "No adjacent duplicates found." << std::endl;
    }

    return 0;
}
