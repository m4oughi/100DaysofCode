#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    std::cout << "Student Records:\n";
    for (auto it = students.begin(); it != students.end(); ++it) {
        std::cout << it->first << " -> " << it->second << "\n";
    }

    return 0;
}
