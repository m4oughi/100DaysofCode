#include <iostream>
#include <deque>

int main() {
    std::deque<std::string> words;

    words.emplace_back("Hello");
    words.emplace_back("World");
    words.emplace_back("STL");

    std::cout << "Deque of words: ";
    for (const auto& word : words) std::cout << word << " ";
    std::cout << "\n";

    return 0;
}
