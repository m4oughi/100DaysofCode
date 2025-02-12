#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}};

    std::cout << "Size of map: " << students.size() << "\n";

    students[3] = "Charlie"; // Adding an element

    std::cout << "Size after insertion: " << students.size() << "\n";

    return 0;
}
