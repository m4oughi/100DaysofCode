#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> wordCount = {{"apple", 5}, {"banana", 3}, {"orange", 7}};

    for (const auto& entry : wordCount) { // `auto` deduces `std::pair<const std::string, int>`
        std::cout << entry.first << ": " << entry.second << std::endl;
    }

    return 0;
}
