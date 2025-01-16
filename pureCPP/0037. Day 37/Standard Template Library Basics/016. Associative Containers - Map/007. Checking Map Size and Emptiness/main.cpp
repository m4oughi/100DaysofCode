#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}};

    std::cout << "Map size: " << students.size() << "\n";
    std::cout << "Is map empty? " << (students.empty() ? "Yes" : "No") << "\n";
    return 0;
}
