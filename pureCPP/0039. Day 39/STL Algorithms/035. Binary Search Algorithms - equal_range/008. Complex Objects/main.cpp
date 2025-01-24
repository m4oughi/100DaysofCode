#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

struct Student {
    std::string name;
    int grade;
};

int main() {
    std::vector<Student> students = {
        {"Alice", 85}, {"Bob", 90}, {"Charlie", 90}, {"David", 95}
    };
    int target_grade = 90;

    auto range = std::equal_range(students.begin(), students.end(), target_grade, [](const Student& s, int grade) {
        return s.grade < grade;
    });

    std::cout << "Students with grade " << target_grade << ":\n";
    for (auto it = range.first; it != range.second; ++it) {
        std::cout << it->name << " (" << it->grade << ")\n";
    }

    return 0;
}
