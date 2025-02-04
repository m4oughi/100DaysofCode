#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_multimap<std::string, int> ummap = {
        {"Alice", 25}, {"Bob", 30}, {"Alice", 22}
    };

    for (auto it = ummap.begin(); it != ummap.end(); ++it) {
        std::cout << it->first << ": " << it->second << "\n";
    }

    return 0;
}
