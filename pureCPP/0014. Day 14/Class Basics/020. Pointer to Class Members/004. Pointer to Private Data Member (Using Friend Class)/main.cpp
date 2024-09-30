#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}

    // Friend class to access private members
    friend class Accessor;
};

class Accessor {
public:
    void accessData(Person& p) {
        string Person::*namePtr = &Person::name;
        int Person::*agePtr = &Person::age;

        cout << "Name: " << p.*namePtr << ", Age: " << p.*agePtr << endl;
    }
};

int main() {
    Person p("Alice", 25);
    Accessor a;
    a.accessData(p);

    return 0;
}
