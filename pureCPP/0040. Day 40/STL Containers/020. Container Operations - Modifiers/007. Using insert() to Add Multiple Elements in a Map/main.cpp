#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> myMap;

    // Insert multiple key-value pairs
    myMap.insert({1, "One"});
    myMap.insert({2, "Two"});
    myMap.insert({3, "Three"});

    std::cout << "Map elements: ";
    for (const auto& pair : myMap) {
        std::cout << pair.first << " => " << pair.second << " ";
    }

    return 0;
}
