#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    auto it = students.find(2);
    if (it != students.end()) {
        std::cout << "Found: " << it->first << " -> " << it->second << "\n";
    } else {
        std::cout << "Key not found\n";
    }

    return 0;
}
