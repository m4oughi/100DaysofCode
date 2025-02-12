#include <iostream>
#include <map>

bool keyExists(const std::map<int, std::string>& students, int key) {
    return students.count(key) > 0;
}

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}};

    if (keyExists(students, 2)) {
        std::cout << "Key 2 exists\n";
    } else {
        std::cout << "Key 2 not found\n";
    }

    return 0;
}
