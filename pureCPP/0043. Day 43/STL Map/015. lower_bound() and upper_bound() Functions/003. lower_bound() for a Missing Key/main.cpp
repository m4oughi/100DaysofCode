#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {4, "Bob"}, {6, "Charlie"}};

    auto it = students.lower_bound(3);
    if (it != students.end()) {
        std::cout << "Lower bound of 3: " << it->first << " -> " << it->second << "\n";
    } else {
        std::cout << "No lower bound found\n";
    }

    return 0;
}
