#include <iostream>
#include <unordered_map>
#include <vector>

int main() {
    std::vector<std::string> words = {"apple", "banana", "apple", "cherry", "banana", "apple"};
    std::unordered_multimap<std::string, int> word_count;

    for (const auto& word : words) {
        word_count.insert({word, 1});
    }

    for (const auto& pair : word_count) {
        std::cout << pair.first << ": " << pair.second << "\n";
    }

    return 0;
}
