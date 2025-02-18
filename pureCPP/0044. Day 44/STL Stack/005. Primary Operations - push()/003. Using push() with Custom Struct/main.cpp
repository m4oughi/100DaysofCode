#include <iostream>
#include <stack>

struct Person {
    std::string name;
    int age;

    Person(std::string n, int a) : name(n), age(a) {}
};

int main() {
    std::stack<Person> people;
    
    people.push(Person("Alice", 25));
    people.push(Person("Bob", 30));

    std::cout << "Top person: " << people.top().name << ", Age: " << people.top().age << std::endl;

    return 0;
}
