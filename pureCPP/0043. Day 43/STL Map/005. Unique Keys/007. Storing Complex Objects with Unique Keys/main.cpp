#include <iostream>
#include <map>

struct Student {
    std::string name;
    int age;
};

bool operator<(const Student& a, const Student& b) {
    return a.name < b.name; // Unique by name
}

int main() {
    std::map<Student, int> studentMarks;

    studentMarks[{"Alice", 20}] = 85;
    studentMarks[{"Bob", 22}] = 90;
    studentMarks[{"Alice", 21}] = 95; // Overwrites previous "Alice"

    std::cout << "Student Marks:\n";
    for (const auto& entry : studentMarks) {
        std::cout << entry.first.name << " -> " << entry.second << "\n";
    }

    return 0;
}
