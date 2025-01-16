#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<int, std::string> hashTable;
    hashTable[std::hash<std::string>()("Alice")] = "Alice's data";
    hashTable[std::hash<std::string>()("Bob")] = "Bob's data";

    for (const auto &entry : hashTable) {
        std::cout << "Hash code: " << entry.first << ", Value: " << entry.second << std::endl;
    }
    return 0;
}
