#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students;

    if (!students.empty()) {
        students.erase(1);
    } else {
        std::cout << "Map is empty, nothing to erase.\n";
    }

    return 0;
}
