#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void breathe() {
        cout << "Animal is breathing." << endl;
    }
};

// Intermediate classes using virtual inheritance to prevent diamond problem
class Mammal : virtual public Animal {
public:
    void walk() {
        cout << "Mammal walks." << endl;
    }
};

class Bird : virtual public Animal {
public:
    void fly() {
        cout << "Bird flies." << endl;
    }
};

// Final derived class inheriting from both Mammal and Bird
class Bat : public Mammal, public Bird {
public:
    void hang() {
        cout << "Bat hangs upside down." << endl;
    }
};

int main() {
    Bat myBat;

    myBat.breathe();  // No ambiguity due to virtual inheritance
    myBat.walk();     // Inherited from Mammal
    myBat.fly();      // Inherited from Bird
    myBat.hang();     // Defined in Bat

    return 0;
}
