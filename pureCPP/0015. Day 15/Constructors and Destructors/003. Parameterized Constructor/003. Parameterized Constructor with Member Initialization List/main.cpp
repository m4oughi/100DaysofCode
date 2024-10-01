#include <iostream>

class Student {
private:
    std::string name;
    int age;
public:
    // Using member initialization list
    Student(std::string n, int a) : name(n), age(a) {
        std::cout << "Student Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    Student student1("John", 21);
    return 0;
}
