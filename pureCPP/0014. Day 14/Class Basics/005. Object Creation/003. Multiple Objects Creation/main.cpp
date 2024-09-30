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
    Person person1, person2;  // Creating two objects of Person class

    person1.name = "Alice";
    person1.age = 25;

    person2.name = "Bob";
    person2.age = 30;

    person1.display();
    person2.display();

    return 0;
}
