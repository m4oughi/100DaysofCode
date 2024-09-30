#include <iostream>
using namespace std;

class Person {
private:
    const string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}

    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person person("Charlie", 28);
    person.display();
    return 0;
}
