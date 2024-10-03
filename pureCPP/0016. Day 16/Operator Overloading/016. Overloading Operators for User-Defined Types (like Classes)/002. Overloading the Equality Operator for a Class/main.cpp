#include <iostream>
#include <string>
using namespace std;

class Person {
    string name;
    int age;
public:
    Person(string n, int a) : name(n), age(a) {}

    // Overloading the == operator
    bool operator==(const Person& other) const {
        return (name == other.name && age == other.age);
    }
};

int main() {
    Person p1("Alice", 30), p2("Alice", 30), p3("Bob", 25);
    
    if (p1 == p2) {
        cout << "p1 and p2 are equal." << endl;  // Output: p1 and p2 are equal.
    }
    
    if (p1 == p3) {
        cout << "p1 and p3 are equal." << endl;
    } else {
        cout << "p1 and p3 are not equal." << endl;  // Output: p1 and p3 are not equal.
    }

    return 0;
}
