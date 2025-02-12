#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    auto it = students.find(2);
    if (it != students.end()) {
        students.erase(it);
        std::cout << "Key 2 erased\n";
    }

    std::cout << "Remaining elements:\n";
    for (const auto& [key, value] : students) {
        std::cout << key << " -> " << value << "\n";
    }

    return 0;
}
