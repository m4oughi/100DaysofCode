#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}};

    int key = 1;
    auto it = students.find(key);
    if (it != students.end()) {
        std::cout << "Key " << key << " found with value: " << it->second << "\n";
    } else {
        std::cout << "Key " << key << " not found!\n";
    }

    return 0;
}
