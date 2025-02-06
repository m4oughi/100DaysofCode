#include <iostream>
#include <list>
#include <string>

int main() {
    std::list<std::string> words = {"apple", "banana", "cherry", "grape"};

    words.remove_if([](const std::string& word) { return word.find('a') != std::string::npos; });

    std::cout << "List after removing words with 'a': ";
    for (const auto& word : words) std::cout << word << " ";

    return 0;
}
