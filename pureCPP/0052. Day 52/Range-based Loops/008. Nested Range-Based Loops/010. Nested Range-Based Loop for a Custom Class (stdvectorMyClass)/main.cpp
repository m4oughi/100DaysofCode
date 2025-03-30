#include <iostream>
#include <vector>

class Student {
public:
    std::string name;
    std::vector<int> grades;

    Student(std::string n, std::vector<int> g) : name(n), grades(g) {}
};

int main() {
    std::vector<Student> students = {
        {"Alice", {85, 90, 78}},
        {"Bob", {76, 88, 92}}
    };

    for (const auto& student : students) {
        std::cout << student.name << ": ";
        for (const auto& grade : student.grades) {
            std::cout << grade << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
