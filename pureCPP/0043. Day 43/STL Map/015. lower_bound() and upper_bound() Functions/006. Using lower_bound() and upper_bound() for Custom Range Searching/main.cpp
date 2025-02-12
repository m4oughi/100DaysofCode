#include <iostream>
#include <map>

void printInRange(std::map<int, std::string>& students, int low, int high) {
    auto start = students.lower_bound(low);
    auto end = students.upper_bound(high);

    std::cout << "Elements in range [" << low << ", " << high << "]:\n";
    for (auto it = start; it != end; ++it) {
        std::cout << it->first << " -> " << it->second << "\n";
    }
}

int main() {
    std::map<int, std::string> students = {{2, "Alice"}, {4, "Bob"}, {6, "Charlie"}, {8, "David"}};

    printInRange(students, 3, 6);
    return 0;
}
