#include <iostream>
#include <unordered_map>
#include <vector>

int main() {
    std::unordered_multimap<std::string, int> scores = {{"Math", 85}, {"Math", 90}, {"Science", 80}, {"Science", 75}};

    std::string subject = "Math";
    auto range = scores.equal_range(subject);

    std::cout << subject << " scores:\n";
    for (auto it = range.first; it != range.second; ++it) {
        std::cout << it->second << std::endl;
    }
    return 0;
}
