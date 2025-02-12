#include <iostream>
#include <map>

struct Student {
    int id;
    std::string name;

    bool operator<(const Student& other) const {
        return id < other.id; // Sort by ID
    }
};

int main() {
    std::map<Student, int> scores = {
        {{101, "Alice"}, 90},
        {{103, "Bob"}, 85},
        {{102, "Charlie"}, 88}
    };

    for (const auto& [student, score] : scores) {
        std::cout << student.id << " (" << student.name << ") -> " << score << "\n";
    }

    return 0;
}
