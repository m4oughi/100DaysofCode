#include <iostream>
#include <list>
#include <string>
#include <algorithm>

bool caseInsensitiveCompare(const std::string& a, const std::string& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end(),
                      [](char c1, char c2) { return std::tolower(c1) == std::tolower(c2); });
}

int main() {
    std::list<std::string> words = {"Apple", "apple", "Banana", "banana", "Cherry", "cherry"};

    words.unique(caseInsensitiveCompare);

    std::cout << "List after case-insensitive unique operation: ";
    for (const auto& word : words) std::cout << word << " ";

    return 0;
}
