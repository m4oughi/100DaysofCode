#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> scores = {{"Alice", 100}, {"Bob", 90}};

    try {
        std::cout << "Alice's score: " << scores.at("Alice") << "\n";
        std::cout << "Eve's score: " << scores.at("Eve") << "\n";  // Key "Eve" doesn't exist
    } catch (const std::out_of_range& e) {
        std::cout << "Key not found.\n";
    }

    return 0;
}
