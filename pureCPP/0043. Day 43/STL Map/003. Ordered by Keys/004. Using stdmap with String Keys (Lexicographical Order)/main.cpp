#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> nameToAge = {
        {"Alice", 25},
        {"Bob", 30},
        {"Charlie", 22}
    };

    std::cout << "Names stored in order:\n";
    for (const auto& entry : nameToAge) {
        std::cout << entry.first << " -> " << entry.second << "\n";
    }

    return 0;
}
