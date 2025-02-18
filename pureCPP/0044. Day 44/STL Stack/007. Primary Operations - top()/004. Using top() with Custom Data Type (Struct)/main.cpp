#include <iostream>
#include <stack>

struct Person {
    std::string name;
    int age;
};

int main() {
    std::stack<Person> s;
    s.push({"Alice", 25});
    s.push({"Bob", 30});

    Person topPerson = s.top();
    std::cout << "Top Person: " << topPerson.name << ", Age: " << topPerson.age << std::endl;

    return 0;
}
