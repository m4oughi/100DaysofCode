#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> myMap;
    
    // Insert individual key-value pairs
    myMap.insert({1, "One"});
    myMap.insert({2, "Two"});

    // Insert a range of key-value pairs
    std::map<int, std::string> anotherMap = {{3, "Three"}, {4, "Four"}};
    myMap.insert(anotherMap.begin(), anotherMap.end());

    // Output the map after insertion
    std::cout << "Map after range insert: ";
    for (const auto& pair : myMap) {
        std::cout << pair.first << ": " << pair.second << " ";
    }
    std::cout << std::endl;

    return 0;
}
