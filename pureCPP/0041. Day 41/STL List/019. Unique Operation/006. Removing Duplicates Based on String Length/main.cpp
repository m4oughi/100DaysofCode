#include <iostream>
#include <list>
#include <string>

bool sameLength(const std::string& a, const std::string& b) {
    return a.length() == b.length();
}

int main() {
    std::list<std::string> words = {"cat", "dog", "bat", "apple", "grape", "melon"};

    words.sort();  // Sorting ensures similar-length words are adjacent
    words.unique(sameLength);

    std::cout << "List after removing consecutive words with same length: ";
    for (const auto& word : words) std::cout << word << " ";

    return 0;
}
