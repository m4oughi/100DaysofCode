#include <iostream>
using namespace std;

class Person {
public:
    void introduce(string name) {
        cout << "Hello, my name is " << name << "." << endl;
    }

    void introduce(string name, int age) {
        cout << "Hello, my name is " << name << " and I am " << age << " years old." << endl;
    }
};

int main() {
    Person person;
    person.introduce("Ethan");
    person.introduce("Sophia", 22);
    return 0;
}
