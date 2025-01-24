#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::vector<std::string> words = {"hello", "C++", "world", "STL", "algorithms"};
    std::vector<std::string> result;

    std::remove_copy_if(words.begin(), words.end(), std::back_inserter(result), [](const std::string& word) {
        return word.length() < 4; // Exclude words with less than 4 characters
    });

    std::cout << "Words after remove_copy_if: ";
    for (const auto& word : result) {
        std::cout << word << " ";
    }
    std::cout << std::endl;

    return 0;
}
