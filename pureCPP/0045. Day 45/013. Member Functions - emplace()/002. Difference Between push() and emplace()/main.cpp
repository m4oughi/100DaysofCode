#include <iostream>
#include <queue>
#include <string>

struct Person {
    std::string name;
    int age;

    Person(std::string n, int a) : name(n), age(a) {
        std::cout << "Person Constructed: " << name << ", " << age << std::endl;
    }
};

int main() {
    std::queue<Person> q;

    q.push(Person("Alice", 25));  // Calls constructor + copy/move
    q.emplace("Bob", 30);         // Constructs directly in place

    return 0;
}
