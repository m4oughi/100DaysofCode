#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {3, "Bob"}, {5, "Charlie"}};

    auto it = students.upper_bound(3);
    if (it != students.end()) {
        std::cout << "Upper bound of 3: " << it->first << " -> " << it->second << "\n";
    } else {
        std::cout << "No upper bound found\n";
    }

    return 0;
}
