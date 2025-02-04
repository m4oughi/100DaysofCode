#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> myMap = {{1, "One"}, {2, "Two"}, {3, "Three"}};

    std::cout << "Before clear, size: " << myMap.size() << std::endl;

    // Clear the map
    myMap.clear();

    std::cout << "After clear, size: " << myMap.size() << std::endl;  // Output: After clear, size: 0

    return 0;
}
