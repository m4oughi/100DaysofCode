#include <iostream>
#include <set>
#include <string>

struct LengthCompare {
    bool operator()(const std::string& a, const std::string& b) const {
        return a.length() < b.length();
    }
};

int main() {
    std::set<std::string, LengthCompare> s = {"banana", "apple", "kiwi", "cherry", "fig"};

    std::cout << "Set elements sorted by string length: ";
    for (const auto& str : s) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    return 0;
}
