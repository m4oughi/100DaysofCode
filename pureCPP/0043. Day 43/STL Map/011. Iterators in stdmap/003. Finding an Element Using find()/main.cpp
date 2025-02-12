#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    int keyToFind = 2;
    auto it = students.find(keyToFind);

    if (it != students.end()) {
        std::cout << "Found: " << it->first << " -> " << it->second << "\n";
    } else {
        std::cout << "Key not found.\n";
    }

    return 0;
}
