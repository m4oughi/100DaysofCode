#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> words = {"orange", "apple", "banana", "grape"};

    std::sort(words.begin(), words.end());

    std::cout << "Alphabetically sorted words: ";
    for (const auto& word : words) {
        std::cout << word << " ";
    }
    return 0;
}
