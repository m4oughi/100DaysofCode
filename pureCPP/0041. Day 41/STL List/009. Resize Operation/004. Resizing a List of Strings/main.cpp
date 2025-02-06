#include <iostream>
#include <list>

int main() {
    std::list<std::string> words = {"Hello", "World"};

    words.resize(4, "C++");  // Add extra elements initialized with "C++"

    std::cout << "List after resizing: ";
    for (const auto& word : words) std::cout << word << " ";

    return 0;
}
