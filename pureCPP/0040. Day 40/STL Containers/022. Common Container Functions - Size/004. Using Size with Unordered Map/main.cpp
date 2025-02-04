#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<int, std::string> myUnorderedMap = {{1, "Apple"}, {2, "Banana"}, {3, "Cherry"}};

    // Getting the size of the unordered map
    std::cout << "Size of unordered map: " << myUnorderedMap.size() << std::endl;  // Output: 3

    return 0;
}
