#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> myMap = {{1, "One"}, {2, "Two"}, {3, "Three"}};

    // Erase all elements from the map
    myMap.erase(myMap.begin(), myMap.end());

    // Output the map after erase
    std::cout << "Map after erase all: " << (myMap.empty() ? "Empty" : "Not empty") << std::endl;

    return 0;
}
