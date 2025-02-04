#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> myMap = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}};

    // Erase elements in the range [1, 3]
    auto start = myMap.find(1);
    auto end = myMap.find(3);
    myMap.erase(start, end);

    // Output the map after erase
    std::cout << "Map after range erase: ";
    for (const auto& pair : myMap) {
        std::cout << pair.first << ": " << pair.second << " ";
    }
    std::cout << std::endl;

    return 0;
}
