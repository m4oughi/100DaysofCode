#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> scores = {{"Alice", 100}, {"Bob", 90}};

    auto range = scores.equal_range("Alice");
    if (range.first != scores.end()) {
        std::cout << "Alice's score: " << range.first->second << "\n";
    } else {
        std::cout << "Alice not found.\n";
    }

    return 0;
}
