#include <iostream>
#include <tuple>

class Person {
    std::string name;
    int age;

public:
    Person(std::string n, int a) : name(n), age(a) {}

    std::tuple<std::string, int> getInfo() const {
        return {name, age};
    }
};

int main() {
    Person p{"John", 30};

    auto [name, age] = p.getInfo();

    std::cout << "Name: " << name << ", Age: " << age << '\n';
    return 0;
}
