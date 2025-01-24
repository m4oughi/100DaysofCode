#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

struct Student {
    std::string name;
    int grade;
};

int main() {
    std::vector<Student> students = {{"Alice", 85}, {"Bob", 60}, {"Charlie", 72}, {"Dave", 50}, {"Eve", 90}};

    std::stable_partition(students.begin(), students.end(), [](const Student& s) { return s.grade >= 70; });

    std::cout << "Passing students:\n";
    for (const auto& student : students) {
        if (student.grade >= 70) std::cout << student.name << " (" << student.grade << ")\n";
    }

    std::cout << "\nFailing students:\n";
    for (const auto& student : students) {
        if (student.grade < 70) std::cout << student.name << " (" << student.grade << ")\n";
    }

    return 0;
}
