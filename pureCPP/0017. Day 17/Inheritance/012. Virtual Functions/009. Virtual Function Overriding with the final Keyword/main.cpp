#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

// Derived class using `final` to prevent further overriding
class Dog : public Animal {
public:
    void sound() override final {
        cout << "Dog barks." << endl;
    }
};

// Another derived class attempting to override (this will cause a compilation error)
// class Puppy : public Dog {
// public:
//     void sound() override {    // Error: cannot override final function
//         cout << "Puppy barks softly." << endl;
//     }
// };

int main() {
    Dog myDog;
    myDog.sound();  // Calls Dog's sound(), cannot be further overridden
    return 0;
}
