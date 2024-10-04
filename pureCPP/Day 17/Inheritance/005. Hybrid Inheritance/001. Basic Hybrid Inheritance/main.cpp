#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

// First level derived class
class Mammal : public Animal {
public:
    void walk() {
        cout << "Mammal walks." << endl;
    }
};

// Second level derived classes
class Dog : public Mammal {
public:
    void bark() {
        cout << "Dog barks." << endl;
    }
};

class Bird : public Animal {
public:
    void fly() {
        cout << "Bird flies." << endl;
    }
};

int main() {
    Dog myDog;
    Bird myBird;

    myDog.sound();  // Inherited from Animal
    myDog.walk();   // Inherited from Mammal
    myDog.bark();   // Defined in Dog

    myBird.sound(); // Inherited from Animal
    myBird.fly();   // Defined in Bird

    return 0;
}
