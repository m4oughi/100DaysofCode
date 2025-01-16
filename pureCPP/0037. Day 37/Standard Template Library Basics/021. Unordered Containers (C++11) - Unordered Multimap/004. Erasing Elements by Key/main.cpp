#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_multimap<std::string, int> grades = {{"Alice", 85}, {"Alice", 90}, {"Bob", 70}};

    grades.erase("Alice");

    for (const auto& pair : grades) {
        std::cout << pair.first << ": " << pair.second << "\n";
    }

    return 0;
}
