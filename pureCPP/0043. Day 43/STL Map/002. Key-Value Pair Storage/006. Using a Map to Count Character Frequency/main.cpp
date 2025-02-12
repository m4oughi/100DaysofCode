#include <iostream>
#include <map>

int main() {
    std::string text = "hello world";
    std::map<char, int> frequency;

    for (char ch : text) {
        if (ch != ' ') {
            frequency[ch]++;
        }
    }

    for (const auto& entry : frequency) {
        std::cout << "Character '" << entry.first << "' appears " << entry.second << " times.\n";
    }

    return 0;
}
