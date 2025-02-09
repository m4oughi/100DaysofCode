#include <iostream>
#include <set>
#include <string>
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
    std::set<std::string, CaseInsensitiveCompare> words = {"Apple", "banana", "APPLE", "Banana"};

    std::cout << "Words sorted case-insensitively: ";
    for (const auto& word : words) {
        std::cout << word << " ";
    }
    std::cout << std::endl;

    return 0;
}
