#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string text = "hello world";
    std::string chars = "aeiou"; // vowels

    auto it = std::find_first_of(text.begin(), text.end(), chars.begin(), chars.end());

    if (it != text.end()) {
        std::cout << "First vowel found: " << *it << " at index: " << std::distance(text.begin(), it) << std::endl;
    } else {
        std::cout << "No vowels found." << std::endl;
    }

    return 0;
}
