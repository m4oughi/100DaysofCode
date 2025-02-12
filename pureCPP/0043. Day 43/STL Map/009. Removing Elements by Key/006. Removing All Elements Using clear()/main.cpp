#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    students.clear(); // Removes all elements

    std::cout << "Size after clear: " << students.size() << "\n";

    return 0;
}
