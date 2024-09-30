#include <iostream>
using namespace std;

class Person {
private:
    static int personCount;
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {
        personCount++;
    }

    static int getPersonCount() {
        return personCount;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int Person::personCount = 0;

int main() {
    Person person1("David", 20);
    Person person2("Emma", 22);

    person1.display();
    person2.display();

    cout << "Total Persons: " << Person::getPersonCount() << endl;
    return 0;
}
