#include <iostream>
#include <vector>
#include <algorithm>

struct Student {
    std::string name;
    int grade;
};

int main() {
    std::vector<Student> students = {
        {"Alice", 85}, {"Bob", 90}, {"Charlie", 87}, {"David", 92}, {"Eve", 88}
    };

    if (std::is_sorted(students.begin(), students.end(), [](const Student& a, const Student& b) {
        return a.grade < b.grade;
    })) {
        std::cout << "The students are sorted by grades.\n";
    } else {
        std::cout << "The students are not sorted by grades.\n";
    }
    return 0;
}
