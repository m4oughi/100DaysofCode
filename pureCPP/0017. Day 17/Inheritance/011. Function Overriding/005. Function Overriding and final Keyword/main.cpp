#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

// Derived class preventing further overriding with `final`
class Dog : public Animal {
public:
    void sound() override final {
        cout << "Dog barks." << endl;
    }
};

// Another derived class attempting to override `sound()` (This will cause a compilation error)
// class Puppy : public Dog {
// public:
//     void sound() override {    // Error: Cannot override a final function
//         cout << "Puppy barks softly." << endl;
//     }
// };

int main() {
    Dog myDog;
    myDog.sound();  // Calls the final overridden function in Dog class
    return 0;
}
