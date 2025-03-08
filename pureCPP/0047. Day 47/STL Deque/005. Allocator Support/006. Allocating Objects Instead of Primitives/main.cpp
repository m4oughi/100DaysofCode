#include <iostream>
#include <deque>

struct Person {
    std::string name;
    int age;

    Person(std::string n, int a) : name(std::move(n)), age(a) {}
};

int main() {
    std::deque<Person> people;

    // Efficient object creation at both ends
    people.emplace_front("Alice", 30);
    people.emplace_back("Bob", 25);
    people.emplace_front("Charlie", 35);

    std::cout << "People in deque:\n";
    for (const auto& person : people)
        std::cout << person.name << " (" << person.age << " years)\n";

    return 0;
}
