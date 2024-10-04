#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

// Derived class overrides base class method
class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks." << endl;
    }
};

int main() {
    Dog myDog;
    myDog.sound();  // Calls the derived class method
    return 0;
}
