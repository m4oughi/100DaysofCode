#include <iostream>
using namespace std;

// Base class
class Animal {
protected:
    int age = 3;

public:
    void showAge() {
        cout << "Animal age: " << age << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void displayAge() {
        cout << "Dog's age: " << age << endl;  // Accessing protected member
    }
};

int main() {
    Dog myDog;
    myDog.displayAge();  // Accesses the protected member from base class
    myDog.showAge();     // Accessing base class function

    return 0;
}
