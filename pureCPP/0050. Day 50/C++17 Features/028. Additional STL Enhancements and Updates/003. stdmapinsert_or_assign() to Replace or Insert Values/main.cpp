#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> myMap;

    myMap.insert_or_assign(1, "One"); // Inserts (1, "One")
    myMap.insert_or_assign(1, "Updated"); // Updates existing key

    std::cout << "Key 1: " << myMap[1] << "\n"; // Outputs "Updated"

    return 0;
}
