#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> myMap = {{1, "Apple"}, {2, "Banana"}, {3, "Cherry"}};

    // Searching for key 2
    auto it = myMap.find(2);
    
    if (it != myMap.end()) {
        std::cout << "Key found, value: " << it->second << std::endl; // Key found, value: Banana
    } else {
        std::cout << "Key not found." << std::endl;
    }

    return 0;
}
