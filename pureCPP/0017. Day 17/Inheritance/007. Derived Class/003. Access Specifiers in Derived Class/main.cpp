#include <iostream>
using namespace std;

// Base class
class Animal {
protected:
    int age = 3;

public:
    void showAge() {
        cout << "Animal's age: " << age << endl;
    }
};

// Derived class with protected inheritance
class Dog : protected Animal {
public:
    void displayAge() {
        cout << "Dog's age: " << age << endl;  // Accessible because it's protected
    }
};

int main() {
    Dog myDog;
    myDog.displayAge();  // Inherited protected member from base class
    return 0;
}
