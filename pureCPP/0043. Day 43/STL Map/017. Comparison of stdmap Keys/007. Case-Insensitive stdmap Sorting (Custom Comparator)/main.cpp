#include <iostream>
#include <map>
#include <algorithm>

struct CaseInsensitiveCompare {
    bool operator()(const std::string& a, const std::string& b) const {
        std::string lowerA = a, lowerB = b;
        std::transform(lowerA.begin(), lowerA.end(), lowerA.begin(), ::tolower);
        std::transform(lowerB.begin(), lowerB.end(), lowerB.begin(), ::tolower);
        return lowerA < lowerB;
    }
};

int main() {
    std::map<std::string, int, CaseInsensitiveCompare> words = {
        {"Apple", 1},
        {"banana", 2},
        {"APPLE", 3},
        {"Banana", 4}
    };

    for (const auto& [word, count] : words) {
        std::cout << word << " -> " << count << "\n";
    }

    return 0;
}
