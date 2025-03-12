#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> wordCount = {{"apple", 3}, {"banana", 5}};

    for (auto it = wordCount.begin(); it != wordCount.end(); ++it) {
        std::cout << it->first << ": " << it->second << std::endl;
    }

    return 0;
}
