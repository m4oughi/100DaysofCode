#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students;

    if (students.begin() == students.end()) {
        std::cout << "The map is empty.\n";
    } else {
        std::cout << "The map has elements.\n";
    }

    return 0;
}
