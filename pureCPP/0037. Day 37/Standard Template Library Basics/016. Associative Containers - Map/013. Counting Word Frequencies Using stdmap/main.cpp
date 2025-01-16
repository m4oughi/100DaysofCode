#include <iostream>
#include <map>
#include <string>
#include <sstream>

int main() {
    std::string text = "this is a test this is only a test";
    std::map<std::string, int> word_count;

    std::istringstream iss(text);
    std::string word;
    while (iss >> word) {
        word_count[word]++;
    }

    for (const auto &pair : word_count) {
        std::cout << "Word: " << pair.first << ", Count: " << pair.second << "\n";
    }
    return 0;
}
