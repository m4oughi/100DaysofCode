#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> ages = {{"Alice", 25}, {"Bob", 30}, {"Charlie", 35}};

    for (const auto& pair : ages) {
        std::cout << pair.first << ": " << pair.second << "\n";
    }
    return 0;
}
