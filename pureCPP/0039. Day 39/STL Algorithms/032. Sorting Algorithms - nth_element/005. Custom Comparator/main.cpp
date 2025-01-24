#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> words = {"apple", "banana", "kiwi", "cherry", "date"};

    std::nth_element(words.begin(), words.begin() + 2, words.end(), [](const std::string& a, const std::string& b) {
        return a.size() < b.size();
    });

    std::cout << "Word with the 3rd smallest length: " << words[2] << "\n";
    return 0;
}
