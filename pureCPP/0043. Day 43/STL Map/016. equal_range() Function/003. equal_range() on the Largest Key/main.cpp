#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {3, "Bob"}, {5, "Charlie"}};

    auto range = students.equal_range(5);

    std::cout << "Lower Bound: " << range.first->first << " -> " << range.first->second << "\n";

    if (range.second == students.end()) {
        std::cout << "Upper Bound is at the end of the map.\n";
    }

    return 0;
}
