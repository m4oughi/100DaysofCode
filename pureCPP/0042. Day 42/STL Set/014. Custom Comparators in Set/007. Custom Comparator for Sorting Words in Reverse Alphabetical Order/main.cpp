#include <iostream>
#include <set>
#include <string>

struct ReverseAlphaCompare {
    bool operator()(const std::string& a, const std::string& b) const {
        return a > b;  // Reverse alphabetical order
    }
};

int main() {
    std::set<std::string, ReverseAlphaCompare> words = {"apple", "orange", "banana", "grape"};

    std::cout << "Words in reverse alphabetical order: ";
    for (const auto& word : words) {
        std::cout << word << " ";
    }
    std::cout << std::endl;

    return 0;
}
