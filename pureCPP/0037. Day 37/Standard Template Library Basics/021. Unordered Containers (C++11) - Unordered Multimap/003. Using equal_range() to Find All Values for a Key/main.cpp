#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_multimap<std::string, int> grades = {{"Alice", 85}, {"Alice", 90}, {"Bob", 70}, {"Bob", 75}};

    auto range = grades.equal_range("Alice");

    std::cout << "Grades for Alice:\n";
    for (auto it = range.first; it != range.second; ++it) {
        std::cout << it->second << "\n";
    }

    return 0;
}
