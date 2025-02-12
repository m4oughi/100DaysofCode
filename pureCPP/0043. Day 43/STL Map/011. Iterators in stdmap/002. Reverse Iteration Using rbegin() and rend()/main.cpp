#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    std::cout << "Reverse Order:\n";
    for (auto it = students.rbegin(); it != students.rend(); ++it) {
        std::cout << it->first << " -> " << it->second << "\n";
    }

    return 0;
}
