#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}};

    auto it = students.find(2);
    if (it != students.end()) {
        std::cout << "Found: " << it->second << "\n";
    } else {
        std::cout << "ID not found\n";
    }
    return 0;
}
