#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_multimap<std::string, int> grades = {{"Alice", 85}, {"Alice", 90}, {"Bob", 75}};

    for (auto it = grades.begin(); it != grades.end(); ++it) {
        std::cout << it->first << ": " << it->second << "\n";
    }

    return 0;
}
