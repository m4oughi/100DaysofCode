#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> fruitPrices = {{"apple", 3}, {"banana", 2}};
    fruitPrices["cherry"] = 5;

    for (const auto &entry : fruitPrices) {
        std::cout << entry.first << ": $" << entry.second << std::endl;
    }
    return 0;
}
