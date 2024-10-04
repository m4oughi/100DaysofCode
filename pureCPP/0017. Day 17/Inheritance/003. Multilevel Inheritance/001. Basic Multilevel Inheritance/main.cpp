#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

class Mammal : public Animal {
public:
    void walk() {
        cout << "Mammal walks." << endl;
    }
};

class Dog : public Mammal {
public:
    void bark() {
        cout << "Dog barks." << endl;
    }
};

int main() {
    Dog myDog;
    myDog.sound();  // Inherited from Animal
    myDog.walk();   // Inherited from Mammal
    myDog.bark();   // Defined in Dog
    return 0;
}
