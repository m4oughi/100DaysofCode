#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_multimap<std::string, int> grades = {{"Alice", 85}, {"Alice", 90}, {"Bob", 75}};

    auto it = grades.find("Alice");
    if (it != grades.end()) {
        std::cout << "Found Alice's grade: " << it->second << "\n";
    } else {
        std::cout << "Alice not found.\n";
    }

    return 0;
}
