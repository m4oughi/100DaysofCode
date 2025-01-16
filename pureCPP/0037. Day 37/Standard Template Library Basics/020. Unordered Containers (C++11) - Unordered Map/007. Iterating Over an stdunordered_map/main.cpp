#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> ages = {{"Alice", 25}, {"Bob", 30}, {"Charlie", 35}};

    for (auto it = ages.begin(); it != ages.end(); ++it) {
        std::cout << it->first << ": " << it->second << "\n";
    }

    return 0;
}
