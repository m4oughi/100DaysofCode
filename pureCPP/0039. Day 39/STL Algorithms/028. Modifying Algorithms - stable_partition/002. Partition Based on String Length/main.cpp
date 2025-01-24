#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> words = {"apple", "cat", "banana", "dog", "elephant"};

    std::stable_partition(words.begin(), words.end(), [](const std::string& s) { return s.length() >= 5; });

    std::cout << "Stably partitioned strings: ";
    for (const auto& word : words) {
        std::cout << word << " ";
    }
    std::cout << std::endl;

    return 0;
}
