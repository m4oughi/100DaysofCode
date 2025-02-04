#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> myMap;

    // Insert key-value pairs
    myMap.insert({1, "One"});
    myMap.insert({2, "Two"});

    // Insert a duplicate key (this will not overwrite the existing key-value pair)
    myMap.insert({1, "Uno"});

    // Output the map after insertion
    std::cout << "Map after insert: ";
    for (const auto& pair : myMap) {
        std::cout << pair.first << ": " << pair.second << " ";
    }
    std::cout << std::endl;

    return 0;
}
