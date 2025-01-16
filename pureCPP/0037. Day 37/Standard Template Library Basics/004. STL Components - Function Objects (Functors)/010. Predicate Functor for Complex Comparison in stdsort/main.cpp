#include <iostream>
#include <vector>
#include <algorithm>

class CompareByLength {
public:
    bool operator()(const std::string &a, const std::string &b) const {
        return a.size() < b.size();
    }
};

int main() {
    std::vector<std::string> words = {"apple", "banana", "fig", "grapefruit"};
    std::sort(words.begin(), words.end(), CompareByLength());

    for (const std::string &word : words) {
        std::cout << word << " ";
    }
    return 0;
}
