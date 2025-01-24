#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> words = {"apple", "banana", "kiwi", "pear", "grape"};

    std::stable_sort(words.begin(), words.end(), [](const std::string& a, const std::string& b) {
        return a.length() < b.length();
    });

    std::cout << "Strings sorted by length (stable): ";
    for (const auto& word : words) {
        std::cout << word << " ";
    }
    return 0;
}
