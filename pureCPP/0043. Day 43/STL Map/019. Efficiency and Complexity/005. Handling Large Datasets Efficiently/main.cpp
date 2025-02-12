#include <iostream>
#include <map>
#include <vector>

int main() {
    std::vector<std::pair<int, std::string>> data = {
        {5, "E"}, {2, "B"}, {8, "H"}, {1, "A"}, {7, "G"}
    };

    // Bulk insertion
    std::map<int, std::string> orderedMap(data.begin(), data.end());

    for (const auto& [key, value] : orderedMap) {
        std::cout << key << " -> " << value << "\n";
    }

    return 0;
}
