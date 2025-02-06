#include <iostream>
#include <list>
#include <string>

int main() {
    std::list<std::string> words = {"apple", "apple", "banana", "banana", "cherry", "cherry"};

    words.unique();

    std::cout << "List after unique operation: ";
    for (const auto& word : words) std::cout << word << " ";

    return 0;
}
