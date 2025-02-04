#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> myMap;

    // Using emplace to add key-value pair
    myMap.emplace(1, "Apple");
    myMap.emplace(2, "Banana");

    std::cout << "Map elements: ";
    for (const auto& pair : myMap) {
        std::cout << pair.first << " => " << pair.second << " ";
    }

    return 0;
}
