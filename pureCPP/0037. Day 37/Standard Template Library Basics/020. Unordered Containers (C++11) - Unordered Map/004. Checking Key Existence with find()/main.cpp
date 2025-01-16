#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> scores = {{"Alice", 100}, {"Bob", 90}};

    if (scores.find("Alice") != scores.end()) {
        std::cout << "Alice's score: " << scores["Alice"] << "\n";
    } else {
        std::cout << "Alice not found.\n";
    }

    if (scores.find("Eve") == scores.end()) {
        std::cout << "Eve not found.\n";
    }

    return 0;
}
