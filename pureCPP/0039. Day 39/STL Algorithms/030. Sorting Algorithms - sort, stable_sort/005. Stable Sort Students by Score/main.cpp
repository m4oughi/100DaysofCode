#include <iostream>
#include <vector>
#include <algorithm>

struct Student {
    std::string name;
    int score;
};

int main() {
    std::vector<Student> students = {
        {"Alice", 85}, {"Bob", 95}, {"Charlie", 85}, {"Dave", 70}, {"Eve", 95}
    };

    std::stable_sort(students.begin(), students.end(), [](const Student& a, const Student& b) {
        return a.score > b.score;
    });

    std::cout << "Students sorted by score (stable):\n";
    for (const auto& student : students) {
        std::cout << student.name << ": " << student.score << "\n";
    }
    return 0;
}
