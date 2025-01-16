#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}};

    for (auto it = students.begin(); it != students.end(); ++it) {
        std::cout << "ID: " << it->first << ", Name: " << it->second << "\n";
    }
    return 0;
}
