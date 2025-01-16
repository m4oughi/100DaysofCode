#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> scores;

    std::cout << "Is the map empty? " << (scores.empty() ? "Yes" : "No") << "\n";

    scores["Alice"] = 100;
    std::cout << "Map size: " << scores.size() << "\n";

    return 0;
}
