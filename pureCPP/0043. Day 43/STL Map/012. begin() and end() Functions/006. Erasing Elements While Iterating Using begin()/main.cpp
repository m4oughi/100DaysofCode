#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    while (!students.empty()) {
        std::cout << "Removing: " << students.begin()->first << "\n";
        students.erase(students.begin());
    }

    std::cout << "Map is now empty.\n";
    return 0;
}
