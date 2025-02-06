#include <iostream>
#include <list>
#include <string>

bool sameFirstLetter(const std::string& a, const std::string& b) {
    return a[0] == b[0]; // Consider words duplicate if they start with the same letter
}

int main() {
    std::list<std::string> words = {"apple", "apricot", "banana", "blueberry", "cherry", "cranberry"};

    words.sort();
    words.unique(sameFirstLetter);

    std::cout << "List after removing words with the same first letter: ";
    for (const auto& word : words) std::cout << word << " ";

    return 0;
}
