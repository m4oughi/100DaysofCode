#include <iostream>
#include <vector>
#include <algorithm>

struct Student {
    std::string name;
    int score;
};

int main() {
    std::vector<Student> students = {
        {"Alice", 85}, {"Bob", 92}, {"Charlie", 87}, {"David", 90}, {"Eve", 88}
    };

    std::nth_element(students.begin(), students.begin() + 1, students.end(), [](const Student& a, const Student& b) {
        return a.score > b.score;
    });

    std::cout << "2nd highest scoring student: " << students[1].name << " with score " << students[1].score << "\n";
    return 0;
}
