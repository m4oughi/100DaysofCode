#include <iostream>
#include <map>

struct CompareByLength {
    bool operator()(const std::string& a, const std::string& b) const {
        return a.length() < b.length();
    }
};

int main() {
    std::map<std::string, int, CompareByLength> wordMap = {
        {"Banana", 10},
        {"Apple", 5},
        {"Pineapple", 8},
        {"Kiwi", 3}
    };

    std::cout << "Words sorted by length:\n";
    for (const auto& entry : wordMap) {
        std::cout << entry.first << " -> " << entry.second << "\n";
    }

    return 0;
}
