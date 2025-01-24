#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> words = {"banana", "apple", "cherry", "date"};

    std::sort(words.begin(), words.end());

    std::cout << "Words sorted lexicographically: ";
    for (const auto& word : words) {
        std::cout << word << " ";
    }
    return 0;
}
