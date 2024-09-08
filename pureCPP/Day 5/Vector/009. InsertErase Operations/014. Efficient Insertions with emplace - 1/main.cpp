#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::pair<int, std::string>> items;

    items.emplace(items.begin(), 1, "Apple");  // Insert at the beginning
    items.emplace(items.end(), 2, "Banana");   // Insert at the end

    std::cout << "Items after emplace insertions:" << std::endl;
    for (const auto& item : items) {
        std::cout << item.first << ": " << item.second << std::endl;
    }

    return 0;
}
