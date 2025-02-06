#include <iostream>
#include <list>
#include <string>

int main() {
    std::list<std::string> words = {"dog", "elephant", "cat", "tiger"};

    words.remove_if([](const std::string& word) { return word.length() < 4; });

    std::cout << "List after removing short words: ";
    for (const auto& word : words) std::cout << word << " ";

    return 0;
}
