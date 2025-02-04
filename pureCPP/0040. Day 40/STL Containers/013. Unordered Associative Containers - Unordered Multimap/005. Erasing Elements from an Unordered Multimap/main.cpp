#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_multimap<int, std::string> ummap = {
        {1, "One"}, {2, "Two"}, {1, "First"}
    };

    ummap.erase(1); // Erases all occurrences of key 1

    for (const auto& pair : ummap) {
        std::cout << pair.first << ": " << pair.second << "\n";
    }

    return 0;
}
