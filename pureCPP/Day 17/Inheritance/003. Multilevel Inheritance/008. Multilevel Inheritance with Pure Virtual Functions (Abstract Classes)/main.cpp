#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() = 0; // Pure virtual function (abstract class)
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
    Animal* myDog = new Dog();
    myDog->sound();  // Calls Dog's implementation of the pure virtual function
    delete myDog;
    return 0;
}
