#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "Animal sound!" << endl;
    }
    virtual ~Animal() {}
};

class Mammal : public virtual Animal {
public:
    void makeSound() override {
        cout << "Mammal sound!" << endl;
    }
};

class Bat : public Mammal {
public:
    void makeSound() override {
        cout << "Screech!" << endl;
    }
};

int main() {
    Animal* animalPtr = new Bat();  // Upcasting
    Bat* batPtr = dynamic_cast<Bat*>(animalPtr);  // Safe downcasting

    if (batPtr) {
        batPtr->makeSound();  // Calls Bat's version
    } else {
        cout << "Downcasting failed!" << endl;
    }

    delete animalPtr;
    return 0;
}
