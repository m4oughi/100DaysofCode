#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}};

    try {
        std::cout << "Student 1: " << students.at(1) << "\n";  // Exists
        std::cout << "Student 3: " << students.at(3) << "\n";  // Throws exception
    } catch (const std::out_of_range& e) {
        std::cout << "Exception: Key 3 not found!\n";
    }

    return 0;
}
