#include <iostream>
#include <deque>

int main() {
    std::deque<std::string> words;

    words.emplace_front("Hello");
    words.emplace_front("World");
    words.emplace_front("STL");

    std::cout << "Deque of words: ";
    for (const auto& word : words) std::cout << word << " ";
    std::cout << "\n";

    return 0;
}
