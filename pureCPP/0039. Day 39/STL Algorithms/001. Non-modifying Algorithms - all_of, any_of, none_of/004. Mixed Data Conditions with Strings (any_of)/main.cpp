#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> words = {"apple", "banana", "kiwi", "apricot"};

    bool containsA = std::any_of(words.begin(), words.end(), [](const std::string& word) {
        return word.find('a') != std::string::npos;
    });

    std::cout << (containsA ? "At least one word contains 'a'." : "No words contain 'a'.") << std::endl;

    return 0;
}
