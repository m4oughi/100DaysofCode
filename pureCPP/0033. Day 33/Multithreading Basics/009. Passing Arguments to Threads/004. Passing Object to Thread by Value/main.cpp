#include <iostream>
#include <thread>

class Person {
public:
    Person(std::string n, int a) : name(n), age(a) {}
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
private:
    std::string name;
    int age;
};

void showPerson(Person p) {
    p.display();
}

int main() {
    Person p("John", 25);
    std::thread t(showPerson, p); // Object passed by value
    t.join();
    return 0;
}
