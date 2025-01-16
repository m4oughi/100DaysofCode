#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> map1 = {{"Alice", 100}, {"Bob", 90}};
    std::unordered_map<std::string, int> map2 = {{"Charlie", 85}, {"David", 75}};

    map1.swap(map2);

    std::cout << "Map1 after swap:\n";
    for (const auto& pair : map1) std::cout << pair.first << ": " << pair.second << "\n";

    std::cout << "\nMap2 after swap:\n";
    for (const auto& pair : map2) std::cout << pair.first << ": " << pair.second << "\n";

    return 0;
}
