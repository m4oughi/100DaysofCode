#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students;

    if (students.empty()) {
        std::cout << "The map is empty.\n";
    }

    students[1] = "Alice";

    if (!students.empty()) {
        std::cout << "The map is no longer empty.\n";
    }

    return 0;
}
