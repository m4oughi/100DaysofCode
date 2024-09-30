#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person person;
    person.name = "Alice";
    person.age = 25;

    person.display();
    return 0;
}
