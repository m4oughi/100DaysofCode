#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

class Mammal : public Animal {
public:
    void sound() override {
        cout << "Mammal makes a sound." << endl;
    }
};

class Dog : public Mammal {
public:
    void sound() override {
        cout << "Dog barks." << endl;
    }
};

int main() {
    Animal* myAnimal = new Dog();
    myAnimal->sound();  // Calls Dog's overridden sound() method due to polymorphism
    delete myAnimal;
    return 0;
}
