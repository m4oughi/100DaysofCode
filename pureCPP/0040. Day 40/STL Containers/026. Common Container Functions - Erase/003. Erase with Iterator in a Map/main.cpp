#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> myMap = {{1, "One"}, {2, "Two"}, {3, "Three"}};

    // Erase the element with key 2 using an iterator
    auto it = myMap.find(2);
    if (it != myMap.end()) {
        myMap.erase(it);
    }

    // Output the map after erase
    std::cout << "Map after erase: ";
    for (const auto& pair : myMap) {
        std::cout << pair.first << ": " << pair.second << " ";
    }
    std::cout << std::endl;

    return 0;
}
