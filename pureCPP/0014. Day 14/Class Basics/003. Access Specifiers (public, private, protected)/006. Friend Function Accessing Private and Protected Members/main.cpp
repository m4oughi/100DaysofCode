#include <iostream>
using namespace std;

class Person {
private:
    string name;

protected:
    int age;

public:
    void setDetails(string n, int a) {
        name = n;
        age = a;
    }

    friend void displayDetails(const Person& person); // Friend function declaration
};

void displayDetails(const Person& person) { // Friend function definition
    cout << "Name: " << person.name << ", Age: " << person.age << endl; // Accessing private and protected members
}

int main() {
    Person person;
    person.setDetails("Olivia", 27);
    displayDetails(person);
    return 0;
}
