#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<int, std::string> myMap = {{1, "Apple"}, {2, "Banana"}, {3, "Cherry"}};

    // Checking if key 2 exists
    int count = myMap.count(2);
    std::cout << "Count of key 2 in map: " << count << std::endl; // 1

    // Checking if key 4 exists
    count = myMap.count(4);
    std::cout << "Count of key 4 in map: " << count << std::endl; // 0

    return 0;
}
