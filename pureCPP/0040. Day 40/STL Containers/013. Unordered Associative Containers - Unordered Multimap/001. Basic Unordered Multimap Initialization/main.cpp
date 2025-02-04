#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_multimap<int, std::string> ummap = {
        {1, "Apple"}, {2, "Banana"}, {1, "Avocado"}
    };

    for (const auto& pair : ummap) {
        std::cout << pair.first << ": " << pair.second << "\n";
    }

    return 0;
}
