#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}};

    auto it = students.find(3);
    if (it == students.end()) {
        std::cout << "Key not found\n";
    } else {
        std::cout << "Found: " << it->first << " -> " << it->second << "\n";
    }

    return 0;
}
