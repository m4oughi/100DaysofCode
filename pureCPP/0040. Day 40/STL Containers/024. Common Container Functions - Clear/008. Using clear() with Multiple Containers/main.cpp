#include <iostream>
#include <vector>
#include <set>
#include <map>

int main() {
    std::vector<int> vec = {1, 2, 3};
    std::set<int> mySet = {5, 10};
    std::map<int, std::string> myMap = {{1, "Apple"}, {2, "Banana"}};

    // Clear the containers
    vec.clear();
    mySet.clear();
    myMap.clear();

    // Check if the containers are empty
    std::cout << "Vector size after clear: " << vec.size() << std::endl;  // Output: Vector size after clear: 0
    std::cout << "Set size after clear: " << mySet.size() << std::endl;    // Output: Set size after clear: 0
    std::cout << "Map size after clear: " << myMap.size() << std::endl;    // Output: Map size after clear: 0

    return 0;
}
