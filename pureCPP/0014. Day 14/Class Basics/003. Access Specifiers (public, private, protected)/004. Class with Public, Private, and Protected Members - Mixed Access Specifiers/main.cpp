#include <iostream>
using namespace std;

class Person {
public:
    string name;

private:
    int age;

protected:
    string address;

public:
    void setDetails(string n, int a, string addr) {
        name = n;
        age = a;
        address = addr;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << ", Address: " << address << endl;
    }
};

int main() {
    Person person;
    person.name = "David";
    person.setDetails("David", 35, "123 Street Name");
    person.display();
    return 0;
}
