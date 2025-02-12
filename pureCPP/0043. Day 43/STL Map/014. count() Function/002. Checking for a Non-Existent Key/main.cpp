#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}};

    if (students.count(3) > 0) {
        std::cout << "Key 3 exists\n";
    } else {
        std::cout << "Key 3 not found\n";
    }

    return 0;
}
