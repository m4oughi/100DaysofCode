#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{2, "Alice"}, {4, "Bob"}, {6, "Charlie"}, {8, "David"}};

    int key = 4;
    auto range = students.equal_range(key);

    std::cout << "Elements from " << key << " onwards:\n";
    for (auto it = range.first; it != students.end(); ++it) {
        std::cout << it->first << " -> " << it->second << "\n";
    }

    return 0;
}
