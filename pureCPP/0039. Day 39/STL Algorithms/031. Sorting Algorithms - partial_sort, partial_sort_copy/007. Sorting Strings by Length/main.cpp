#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> words = {"apple", "banana", "kiwi", "cherry", "date"};

    std::sort(words.begin(), words.end(), [](const std::string& a, const std::string& b) {
        return a.size() < b.size();
    });

    std::cout << "Words sorted by length: ";
    for (const auto& word : words) {
        std::cout << word << " ";
    }
    return 0;
}
