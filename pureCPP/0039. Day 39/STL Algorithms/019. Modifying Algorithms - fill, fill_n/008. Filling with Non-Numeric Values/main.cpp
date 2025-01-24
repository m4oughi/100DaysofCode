#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> words(5);

    std::fill(words.begin(), words.end(), "hello");

    std::cout << "Filled vector of strings: ";
    for (const auto& word : words) {
        std::cout << word << " ";
    }
    std::cout << std::endl;

    return 0;
}
