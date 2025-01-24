#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> words = {"hello", "world", "C++", "STL", "remove"};

    auto new_end = std::remove_if(words.begin(), words.end(), [](const std::string& word) {
        return word.length() < 4; // Remove words with less than 4 characters
    });
    words.erase(new_end, words.end());

    std::cout << "Words after remove_if: ";
    for (const auto& word : words) {
        std::cout << word << " ";
    }
    std::cout << std::endl;

    return 0;
}
