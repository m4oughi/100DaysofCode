#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int* age;

public:
    Person(string n, int a) {
        name = n;
        age = new int(a); // Dynamic memory allocation
    }

    ~Person() {
        delete age; // Free allocated memory
    }

    void display() {
        cout << "Name: " << name << ", Age: " << *age << endl;
    }
};

int main() {
    Person person("Lucy", 29);
    person.display();
    return 0;
}
