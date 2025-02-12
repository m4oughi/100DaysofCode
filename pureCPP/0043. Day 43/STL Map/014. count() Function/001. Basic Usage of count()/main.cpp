#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    if (students.count(2) > 0) {
        std::cout << "Key 2 exists\n";
    } else {
        std::cout << "Key 2 not found\n";
    }

    return 0;
}
