#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> myMap = {{1, "Apple"}, {2, "Banana"}, {3, "Cherry"}};

    // Getting the size of the map
    std::cout << "Size of map: " << myMap.size() << std::endl;  // Output: 3

    return 0;
}
