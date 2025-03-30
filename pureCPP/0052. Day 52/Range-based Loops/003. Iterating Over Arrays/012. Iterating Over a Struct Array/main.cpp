#include <iostream>

struct Student {
    std::string name;
    int age;
};

int main() {
    Student students[] = {{"Alice", 20}, {"Bob", 22}, {"Charlie", 19}};

    for (const auto& student : students) {
        std::cout << "Name: " << student.name << ", Age: " << student.age << std::endl;
    }

    return 0;
}
