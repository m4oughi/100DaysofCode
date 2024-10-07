#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal sound" << endl;
    }
};

class Mammal : public Animal {
public:
    void sound() override {
        cout << "Mammal sound" << endl;
    }
};

class Dog : public Mammal {
public:
    void sound() override {
        cout << "Woof Woof" << endl;
    }
};

int main() {
    Animal* animalPtr = new Dog();
    animalPtr->sound();  // Calls Dog's sound method due to dynamic binding

    delete animalPtr;
    return 0;
}
