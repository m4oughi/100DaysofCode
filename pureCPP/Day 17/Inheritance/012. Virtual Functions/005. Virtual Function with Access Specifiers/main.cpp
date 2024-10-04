#include <iostream>
using namespace std;

// Base class
class Animal {
protected:
    virtual void sound() {
        cout << "Animal makes a sound." << endl;
    }

public:
    void makeSound() {
        sound();  // Calls the virtual function
    }
};

// Derived class Dog overriding the protected virtual function
class Dog : public Animal {
protected:
    void sound() override {
        cout << "Dog barks." << endl;
    }
};

int main() {
    Dog myDog;
    myDog.makeSound();  // Accesses the overridden sound() function via public method
    return 0;
}
