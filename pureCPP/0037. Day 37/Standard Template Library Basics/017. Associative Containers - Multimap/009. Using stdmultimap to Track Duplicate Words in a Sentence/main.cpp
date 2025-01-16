#include <iostream>
#include <map>
#include <sstream>
#include <string>

int main() {
    std::string text = "this is a test this is only a test";
    std::multimap<std::string, int> word_positions;
    std::istringstream iss(text);
    std::string word;
    int position = 0;

    while (iss >> word) {
        word_positions.insert({word, position});
        position++;
    }

    for (const auto &pair : word_positions) {
        std::cout << "Word: " << pair.first << ", Position: " << pair.second << "\n";
    }

    return 0;
}
