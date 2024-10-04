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
    void hasFur() {
        cout << "Mammal has fur." << endl;
    }
};

class Dog : public Mammal {
public:
    void bark() {
        cout << "Dog barks." << endl;
    }
};

class GermanShepherd : public Dog {
public:
    void guard() {
        cout << "German Shepherd guards the house." << endl;
    }
};

int main() {
    GermanShepherd myDog;
    myDog.sound();      // Inherited from Animal
    myDog.hasFur();     // Inherited from Mammal
    myDog.bark();       // Inherited from Dog
    myDog.guard();      // Defined in GermanShepherd
    return 0;
}
