#include <iostream>
#include <set>
#include <string>

struct Student {
    std::string name;
    int marks;
};

struct MarksCompare {
    bool operator()(const Student& a, const Student& b) const {
        return a.marks > b.marks; // Sort in descending order of marks
    }
};

int main() {
    std::set<Student, MarksCompare> students = {{"Alice", 85}, {"Bob", 92}, {"Charlie", 78}};

    std::cout << "Students sorted by marks: ";
    for (const auto& s : students) {
        std::cout << "{" << s.name << ", " << s.marks << "} ";
    }
    std::cout << std::endl;

    return 0;
}
