#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{2, "Alice"}, {4, "Bob"}, {6, "Charlie"}};

    auto range = students.equal_range(3);

    if (range.first != students.end()) {
        std::cout << "Lower Bound: " << range.first->first << " -> " << range.first->second << "\n";
    }
    if (range.second != students.end()) {
        std::cout << "Upper Bound: " << range.second->first << " -> " << range.second->second << "\n";
    }

    return 0;
}
