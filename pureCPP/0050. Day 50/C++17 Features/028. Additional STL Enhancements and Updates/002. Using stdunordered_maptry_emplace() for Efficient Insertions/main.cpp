#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<int, std::string> myMap;

    myMap.try_emplace(1, "One"); // Inserts (1, "One")
    myMap.try_emplace(1, "New Value"); // Does nothing since key 1 exists

    std::cout << "Key 1: " << myMap[1] << "\n"; // Outputs "One"

    return 0;
}
