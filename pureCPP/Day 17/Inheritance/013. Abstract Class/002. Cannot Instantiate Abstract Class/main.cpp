#include <iostream>
using namespace std;

// Abstract base class
class Animal {
public:
    virtual void sound() = 0;  // Pure virtual function
};

// Derived class Dog
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks." << endl;
    }
};

int main() {
    // Animal myAnimal;  // Error: Cannot instantiate an abstract class
    Dog myDog;
    myDog.sound();  // Calls the overridden sound function
    return 0;
}
