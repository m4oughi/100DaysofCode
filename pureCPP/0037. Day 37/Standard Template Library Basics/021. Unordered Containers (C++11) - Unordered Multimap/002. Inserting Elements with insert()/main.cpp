#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_multimap<std::string, int> scores;

    scores.insert({"Alice", 90});
    scores.insert({"Alice", 95});
    scores.insert({"Bob", 80});
    scores.insert({"Bob", 85});

    for (const auto& pair : scores) {
        std::cout << pair.first << ": " << pair.second << "\n";
    }

    return 0;
}
