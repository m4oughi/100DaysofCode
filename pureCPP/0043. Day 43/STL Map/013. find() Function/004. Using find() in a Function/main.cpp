#include <iostream>
#include <map>

bool keyExists(const std::map<int, std::string>& students, int key) {
    return students.find(key) != students.end();
}

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}};

    if (keyExists(students, 2)) {
        std::cout << "Key exists\n";
    } else {
        std::cout << "Key not found\n";
    }

    return 0;
}
