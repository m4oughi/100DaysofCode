#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    auto range = students.equal_range(2);
    if (range.first != students.end()) {
        std::cout << "Lower bound: " << range.first->second << "\n";
    }
    if (range.second != students.end()) {
        std::cout << "Upper bound: " << range.second->second << "\n";
    }
    return 0;
}
