#include <iostream>
#include <unordered_map>
#include <string>

struct CustomHash {
    std::size_t operator()(const std::string& key) const {
        std::size_t hash = 0;
        for (char c : key) {
            hash = hash * 31 + c;
        }
        return hash;
    }
};

int main() {
    std::unordered_multimap<std::string, int, CustomHash> scores = {{"Alice", 85}, {"Alice", 90}, {"Bob", 75}};

    for (const auto& pair : scores) {
        std::cout << pair.first << ": " << pair.second << "\n";
    }

    return 0;
}
