#include <iostream>
#include <map>

struct Student {
    int id;
    std::string name;
};

struct CompareByName {
    bool operator()(const Student& a, const Student& b) const {
        return a.name < b.name; // Sort by name
    }
};

int main() {
    std::map<Student, int, CompareByName> scores = {
        {{101, "Alice"}, 90},
        {{103, "Bob"}, 85},
        {{102, "Charlie"}, 88}
    };

    for (const auto& [student, score] : scores) {
        std::cout << student.name << " (ID: " << student.id << ") -> " << score << "\n";
    }

    return 0;
}
