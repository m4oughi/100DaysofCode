#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> myMap;

    // Check if the map is empty
    if (myMap.empty()) {
        std::cout << "Map is empty." << std::endl;  // Output: Map is empty.
    } else {
        std::cout << "Map is not empty." << std::endl;
    }

    return 0;
}
