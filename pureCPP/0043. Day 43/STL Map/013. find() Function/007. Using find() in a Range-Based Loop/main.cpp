#include <iostream>
#include <map>

int main() {
    std::map<int, int> scores = {{1, 80}, {2, 90}, {3, 85}};
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    for (const auto& [id, score] : scores) {
        auto it = students.find(id);
        if (it != students.end()) {
            std::cout << "Student: " << it->second << " - Score: " << score << "\n";
        }
    }

    return 0;
}
