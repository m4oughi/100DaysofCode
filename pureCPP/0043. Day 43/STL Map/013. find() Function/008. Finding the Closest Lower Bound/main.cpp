#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {3, "Charlie"}, {5, "Eve"}};

    int searchKey = 4;
    auto it = students.find(searchKey);

    if (it == students.end()) {
        it = students.lower_bound(searchKey);
        if (it != students.end()) {
            std::cout << "Closest found: " << it->first << " -> " << it->second << "\n";
        } else {
            std::cout << "No element greater than or equal to " << searchKey << "\n";
        }
    } else {
        std::cout << "Exact match: " << it->first << " -> " << it->second << "\n";
    }

    return 0;
}
