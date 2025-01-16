#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> scores;

    scores["Alice"] = 100;
    scores.insert({"Bob", 90});
    scores["Charlie"] = 85;

    for (const auto& pair : scores) {
        std::cout << pair.first << ": " << pair.second << "\n";
    }
    return 0;
}
