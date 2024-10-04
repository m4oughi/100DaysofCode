#include <iostream>
using namespace std;

// Base class 1
class Animal {
public:
    void breathe() {
        cout << "Animal is breathing." << endl;
    }
};

// Base class 2
class Pet {
public:
    void beFriendly() {
        cout << "Pet is friendly." << endl;
    }
};

// Derived class inheriting from multiple base classes
class Dog : public Animal, public Pet {
public:
    void bark() {
        cout << "Dog barks." << endl;
    }
};

int main() {
    Dog myDog;
    myDog.breathe();   // Inherited from Animal
    myDog.beFriendly(); // Inherited from Pet
    myDog.bark();      // Defined in Dog
    return 0;
}
