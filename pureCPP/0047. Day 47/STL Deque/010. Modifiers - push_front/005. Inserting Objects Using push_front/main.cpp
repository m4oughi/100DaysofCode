#include <iostream>
#include <deque>

class Person {
public:
    std::string name;
    int age;

    Person(std::string n, int a) : name(n), age(a) {}
};

int main() {
    std::deque<Person> dq;

    dq.push_front(Person("Alice", 25));
    dq.push_front(Person("Bob", 30));

    for (const auto& p : dq) {
        std::cout << p.name << " (" << p.age << " years old)\n";
    }

    return 0;
}
