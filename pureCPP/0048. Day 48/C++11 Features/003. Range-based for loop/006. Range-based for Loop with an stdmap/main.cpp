#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> wordCount = {{"apple", 3}, {"banana", 5}};

    for (const auto& pair : wordCount) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
