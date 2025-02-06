#include <iostream>
#include <list>
#include <string>

int main() {
    std::list<std::string> words = {"banana", "kiwi", "strawberry", "apple"};

    words.sort([](const std::string& a, const std::string& b) {
        return a.length() < b.length(); // Sort by string length
    });

    std::cout << "Sorted by Length: ";
    for (const auto& word : words) std::cout << word << " ";

    return 0;
}
