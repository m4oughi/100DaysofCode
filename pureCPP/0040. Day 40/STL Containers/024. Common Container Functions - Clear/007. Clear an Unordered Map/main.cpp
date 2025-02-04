#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<int, std::string> myUnorderedMap = {{1, "Apple"}, {2, "Banana"}};

    std::cout << "Before clear, size: " << myUnorderedMap.size() << std::endl;

    // Clear the unordered map
    myUnorderedMap.clear();

    std::cout << "After clear, size: " << myUnorderedMap.size() << std::endl;  // Output: After clear, size: 0

    return 0;
}
