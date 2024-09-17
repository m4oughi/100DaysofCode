#include <iostream>
#include <vector>
#include <algorithm>

class Student {
public:
    std::string name;
    int grade;

    Student(std::string n, int g) : name(n), grade(g) {}

    // Overload the < operator for sorting
    bool operator<(const Student& other) const {
        return grade < other.grade;
    }

    void display() const {
        std::cout << name << ": " << grade << std::endl;
    }
};

int main() {
    std::vector<Student> students = {{"Alice", 90}, {"Bob", 85}, {"Charlie", 95}};
    
    std::sort(students.begin(), students.end());  // Sorts using overloaded < operator
    
    for (const auto& student : students) {
        student.display();
    }

    return 0;
}
