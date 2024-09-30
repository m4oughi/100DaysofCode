#include <iostream>
using namespace std;

class Person {
private:
    string name;
    mutable int mutableValue; // Mutable member can be modified in const member functions

public:
    Person(string n, int value) : name(n), mutableValue(value) {}

    void modifyMutableValue(int newValue) const {
        mutableValue = newValue; // Mutable allows modification in const function
    }

    void display() const {
        cout << "Name: " << name << ", Mutable Value: " << mutableValue << endl;
    }
};

int main() {
    const Person person("Mia", 5);
    person.modifyMutableValue(10); // Modify mutable data member

    person.display();
    return 0;
}
