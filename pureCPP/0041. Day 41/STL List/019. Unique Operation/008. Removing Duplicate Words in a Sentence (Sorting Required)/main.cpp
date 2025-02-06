#include <iostream>
#include <list>
#include <string>

int main() {
    std::list<std::string> sentence = {"hello", "world", "hello", "C++", "world", "STL"};

    sentence.sort(); // Sort first
    sentence.unique();

    std::cout << "List after unique operation: ";
    for (const auto& word : sentence) std::cout << word << " ";

    return 0;
}
