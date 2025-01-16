#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> scores = {{"Alice", 100}, {"Bob", 90}};

    scores.erase("Bob");

    for (const auto& pair : scores) {
        std::cout << pair.first << ": " << pair.second << "\n";
    }

    return 0;
}
