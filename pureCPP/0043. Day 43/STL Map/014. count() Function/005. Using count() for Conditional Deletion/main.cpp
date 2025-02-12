#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    if (students.count(2)) {
        students.erase(2);
        std::cout << "Key 2 erased\n";
    } else {
        std::cout << "Key 2 not found\n";
    }

    std::cout << "Remaining elements:\n";
    for (const auto& [key, value] : students) {
        std::cout << key << " -> " << value << "\n";
    }

    return 0;
}
