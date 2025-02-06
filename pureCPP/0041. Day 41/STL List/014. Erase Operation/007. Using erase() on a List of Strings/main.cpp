#include <iostream>
#include <list>

int main() {
    std::list<std::string> words = {"apple", "banana", "cherry", "date"};

    auto it = words.begin();
    std::advance(it, 2); // Move to "cherry"
    words.erase(it); // Erase "cherry"

    std::cout << "List after erasing 'cherry': ";
    for (const auto& word : words) {
        std::cout << word << " ";
    }
    std::cout << std::endl;

    return 0;
}
