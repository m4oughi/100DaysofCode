#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}};

    if (students.count(2)) {
        std::cout << "count() confirms key 2 exists\n";
    }

    if (students.find(2) != students.end()) {
        std::cout << "find() confirms key 2 exists\n";
    }

    return 0;
}
