#include <iostream>
#include <map>

int main() {
    std::map<std::pair<int, std::string>, int> studentScores = {
        {{101, "Alice"}, 90},
        {{102, "Charlie"}, 85},
        {{101, "Bob"}, 88}
    };

    for (const auto& [key, score] : studentScores) {
        std::cout << "(" << key.first << ", " << key.second << ") -> " << score << "\n";
    }

    return 0;
}
