#include <iostream>
#include <list>
#include <string>

int main() {
    std::list<std::string> words = {"banana", "apple", "grape", "cherry"};

    words.sort(); // Sort lexicographically

    std::cout << "Sorted Words: ";
    for (const auto& word : words) std::cout << word << " ";

    return 0;
}
