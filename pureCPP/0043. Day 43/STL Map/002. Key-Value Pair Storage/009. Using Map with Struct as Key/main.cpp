#include <iostream>
#include <map>

struct Student {
    int id;
    std::string name;

    bool operator<(const Student& other) const {
        return id < other.id; // Sorting by ID
    }
};

int main() {
    std::map<Student, int> marks;

    marks[{101, "Alice"}] = 90;
    marks[{102, "Bob"}] = 85;
    marks[{103, "Charlie"}] = 88;

    for (const auto& entry : marks) {
        std::cout << "Student " << entry.first.name << " (ID: " << entry.first.id << ") scored " << entry.second << "\n";
    }

    return 0;
}
