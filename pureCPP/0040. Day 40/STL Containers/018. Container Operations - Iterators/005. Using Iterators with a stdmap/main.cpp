#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> scores = {{"Alice", 90}, {"Bob", 80}, {"Charlie", 85}};

    std::cout << "Map elements:\n";
    for (auto it = scores.begin(); it != scores.end(); ++it) {
        std::cout << it->first << " -> " << it->second << "\n";
    }

    return 0;
}
