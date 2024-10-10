#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() = 0;  // Pure virtual function
};

class Mammal : public Animal {
public:
    void makeSound() override {
        cout << "Generic mammal sound" << endl;
    }
};

class Dog : public Mammal {
public:
    void makeSound() override {
        cout << "Woof!" << endl;
    }
};

int main() {
    Animal* animal = new Dog();
    animal->makeSound();  // Outputs "Woof!" due to dynamic dispatch

    delete animal;
    return 0;
}
