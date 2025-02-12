#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students1 = {{1, "Alice"}, {2, "Bob"}};
    std::map<int, std::string> students2 = {{3, "Charlie"}, {4, "David"}};

    students1.insert(students2.begin(), students2.end()); // Bulk insert

    std::cout << "Combined Student Records:\n";
    for (const auto& entry : students1) {
        std::cout << entry.first << " -> " << entry.second << "\n";
    }

    return 0;
}
