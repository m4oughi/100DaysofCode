#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person person;
    person.setName("Bob");
    person.setAge(30);

    person.display();
    return 0;
}
