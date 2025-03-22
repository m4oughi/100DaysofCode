#include <iostream>
#include <unordered_map>
#include <string_view>

int main() {
    std::unordered_map<std::string_view, int> wordCounts = {
        {"apple", 5}, {"banana", 3}, {"cherry", 7}
    };

    std::string_view key = "banana";
    if (wordCounts.find(key) != wordCounts.end()) {
        std::cout << key << " count: " << wordCounts[key] << '\n';
    }

    return 0;
}
