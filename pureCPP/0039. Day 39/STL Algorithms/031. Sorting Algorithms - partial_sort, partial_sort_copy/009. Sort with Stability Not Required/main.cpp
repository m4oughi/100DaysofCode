#include <iostream>
#include <vector>
#include <algorithm>

struct Student {
    std::string name;
    int age;
};

int main() {
    std::vector<Student> students = {
        {"Alice", 20}, {"Bob", 19}, {"Alice", 22}, {"Charlie", 21}
    };

    std::sort(students.begin(), students.end(), [](const Student& a, const Student& b) {
        return a.name < b.name;
    });

    std::cout << "Students sorted by name:\n";
    for (const auto& student : students) {
        std::cout << student.name << " (" << student.age << ")\n";
    }
    return 0;
}
