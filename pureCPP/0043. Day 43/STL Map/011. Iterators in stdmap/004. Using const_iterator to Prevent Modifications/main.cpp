#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    std::cout << "Student List:\n";
    for (std::map<int, std::string>::const_iterator it = students.begin(); it != students.end(); ++it) {
        std::cout << it->first << " -> " << it->second << "\n";
    }

    return 0;
}
