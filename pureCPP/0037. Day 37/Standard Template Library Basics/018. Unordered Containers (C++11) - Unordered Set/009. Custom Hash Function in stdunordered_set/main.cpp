#include <iostream>
#include <unordered_set>
#include <string>

struct CustomHash {
    std::size_t operator()(const std::string &str) const {
        std::size_t hash = 0;
        for (char c : str) {
            hash = hash * 31 + c;
        }
        return hash;
    }
};

int main() {
    std::unordered_set<std::string, CustomHash> words = {"apple", "banana", "cherry"};
    words.insert("date");

    for (const auto &word : words) {
        std::cout << word << " ";
    }
    return 0;
}
