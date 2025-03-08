#include <iostream>
#include <deque>

struct Student {
    std::string name;
    int age;

    Student(std::string n, int a) : name(n), age(a) {}
};

int main() {
    std::deque<Student> students;

    // Adding students to the deque
    students.push_back(Student("Alice", 20));
    students.push_back(Student("Bob", 22));

    // Displaying the student information
    for (const auto& student : students)
        std::cout << "Name: " << student.name << ", Age: " << student.age << "\n";

    return 0;
}
