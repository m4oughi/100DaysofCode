#include <iostream>
#include <list>
#include <string>

int main() {
    std::list<std::string> words = {"apple", "banana", "cherry", "date"};

    words.reverse(); // Reverse the list

    std::cout << "Reversed List: ";
    for (const auto& word : words) std::cout << word << " ";

    return 0;
}
