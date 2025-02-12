#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}};

    auto it = students.find(2);
    if (it != students.end()) {
        it->second = "Robert";
        std::cout << "Updated: " << it->first << " -> " << it->second << "\n";
    }

    return 0;
}
