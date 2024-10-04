#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void sound() {
        cout << "Animal sound." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks." << endl;
    }

    void makeBaseSound() {
        Animal::sound();  // Accessing the base class method
    }
};

int main() {
    Dog myDog;
    myDog.sound();       // Calls the derived class method
    myDog.makeBaseSound();  // Calls the base class method
    return 0;
}
