#include <iostream>

struct Person {
    std::string name = "Unknown";
    int age = 18;
};

int main() {
    Person p1;  // Uses default values
    Person p2{"Alice", 25};  // Overrides default values

    std::cout << "Person 1: " << p1.name << ", Age: " << p1.age << "\n";
    std::cout << "Person 2: " << p2.name << ", Age: " << p2.age << "\n";

    return 0;
}
