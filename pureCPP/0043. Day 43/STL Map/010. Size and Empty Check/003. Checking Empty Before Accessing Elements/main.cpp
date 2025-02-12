#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students;

    if (!students.empty()) {
        std::cout << "First element: " << students.begin()->second << "\n";
    } else {
        std::cout << "Map is empty, no elements to access.\n";
    }

    return 0;
}
