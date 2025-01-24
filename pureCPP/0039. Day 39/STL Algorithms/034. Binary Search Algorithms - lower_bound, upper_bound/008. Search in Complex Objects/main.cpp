#include <iostream>
#include <vector>
#include <algorithm>

struct Student {
    std::string name;
    int grade;
};

int main() {
    std::vector<Student> students = {{"Alice", 85}, {"Bob", 90}, {"Charlie", 92}, {"David", 95}};
    int target = 90;

    auto lower = std::lower_bound(students.begin(), students.end(), target, [](const Student& s, int grade) {
        return s.grade < grade;
    });

    auto upper = std::upper_bound(students.begin(), students.end(), target, [](int grade, const Student& s) {
        return grade < s.grade;
    });

    std::cout << "Lower bound student: " << (lower != students.end() ? lower->name : "None") << "\n";
    std::cout << "Upper bound student: " << (upper != students.end() ? upper->name : "None") << "\n";
    return 0;
}
