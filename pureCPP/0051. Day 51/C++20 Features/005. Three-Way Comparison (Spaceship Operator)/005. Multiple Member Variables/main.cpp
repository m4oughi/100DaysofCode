#include <iostream>
#include <compare>

class Person {
public:
    std::string name;
    int age;

    auto operator<=>(const Person& other) const {
        if (auto cmp = age <=> other.age; cmp != 0) return cmp;
        return name <=> other.name;
    }
};

int main() {
    Person p1{"Alice", 25}, p2{"Bob", 25};

    if (p1 < p2) std::cout << p1.name << " is ranked before " << p2.name << "\n";
    else if (p1 > p2) std::cout << p1.name << " is ranked after " << p2.name << "\n";
    else std::cout << "Both persons are equal\n";
}
