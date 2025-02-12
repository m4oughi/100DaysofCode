#include <iostream>
#include <map>

int main() {
    std::multimap<std::string, int> scores = {
        {"Alice", 90}, {"Bob", 85}, {"Alice", 92}, {"Alice", 88}
    };

    std::cout << "Alice has " << scores.count("Alice") << " scores recorded.\n";

    return 0;
}
