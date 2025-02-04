#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<int, std::string> emptyMap;

    // Check if the unordered map is empty
    if (emptyMap.size() == 0) {
        std::cout << "The unordered map is empty." << std::endl;
    }

    return 0;
}
