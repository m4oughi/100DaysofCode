#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{10, "Alice"}, {20, "Bob"}, {30, "Charlie"}};

    if (!students.empty()) {
        std::cout << "First element: " << students.begin()->first << " -> " << students.begin()->second << "\n";
        std::cout << "Last element: " << std::prev(students.end())->first << " -> " << std::prev(students.end())->second << "\n";
    }

    return 0;
}
