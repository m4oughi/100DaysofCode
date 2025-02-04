#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_multimap<int, std::string> map1 = {{1, "One"}, {2, "Two"}};
    std::unordered_multimap<int, std::string> map2 = {{3, "Three"}, {4, "Four"}};

    map1.swap(map2);

    std::cout << "Map1 after swap:\n";
    for (const auto& pair : map1) std::cout << pair.first << ": " << pair.second << "\n";

    std::cout << "\nMap2 after swap:\n";
    for (const auto& pair : map2) std::cout << pair.first << ": " << pair.second << "\n";

    return 0;
}
