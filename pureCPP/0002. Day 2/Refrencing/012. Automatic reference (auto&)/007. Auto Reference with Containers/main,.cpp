#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> myMap = {{1, "one"}, {2, "two"}};

    for (auto& pair : myMap) {
        pair.second += " modified";  // Modify the value in the map
    }

    for (const auto& pair : myMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
        // Output: 1: one modified
        //         2: two modified
    }

    return 0;
}