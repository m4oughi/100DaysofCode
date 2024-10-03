#include <iostream>
using namespace std;

class Person {
    int age;
public:
    Person(int a) : age(a) {}

    bool operator&&(const Person& other) const {
        return age >= 18 && other.age >= 18;
    }

    bool operator||(const Person& other) const {
        return age >= 18 || other.age >= 18;
    }

    bool operator!() const {
        return age < 18;
    }

    void display() const {
        cout << "Age: " << age << endl;
    }
};

int main() {
    Person p1(20), p2(16), p3(25);
    
    cout << (p1 && p2) << endl;  // Output: 0 (false)
    cout << (p1 || p2) << endl;  // Output: 1 (true)
    cout << !p2 << endl;         // Output: 1 (true, because p2 is under 18)
    
    return 0;
}
