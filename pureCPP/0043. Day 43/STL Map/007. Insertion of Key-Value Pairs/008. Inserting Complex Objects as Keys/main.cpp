#include <iostream>
#include <map>

struct Student {
    std::string name;
    int age;

    bool operator<(const Student& other) const {
        return name < other.name; // Order by name
    }
};

int main() {
    std::map<Student, int> studentGrades;

    studentGrades[{"Alice", 20}] = 85;
    studentGrades[{"Bob", 22}] = 90;
    studentGrades[{"Alice", 21}] = 95; // Different age, so a new entry

    std::cout << "Student Grades:\n";
    for (const auto& entry : studentGrades) {
        std::cout << entry.first.name << " (Age: " << entry.first.age << ") -> " << entry.second << "\n";
    }

    return 0;
}
