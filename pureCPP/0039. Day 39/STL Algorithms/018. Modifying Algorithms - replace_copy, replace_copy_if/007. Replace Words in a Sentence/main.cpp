#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>

int main() {
    std::vector<std::string> words = {"apple", "is", "a", "fruit"};
    std::vector<std::string> result;

    std::replace_copy_if(words.begin(), words.end(), std::back_inserter(result), 
                         [](const std::string& word) { return word.length() <= 2; }, "SHORT");

    std::cout << "Original words: ";
    for (const auto& word : words) {
        std::cout << word << " ";
    }

    std::cout << "\nResult words: ";
    for (const auto& word : result) {
        std::cout << word << " ";
    }
    std::cout << std::endl;

    return 0;
}
