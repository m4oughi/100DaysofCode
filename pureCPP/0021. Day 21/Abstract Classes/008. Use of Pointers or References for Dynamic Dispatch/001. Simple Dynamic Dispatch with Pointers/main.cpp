#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() = 0;  // Pure virtual function
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Meow!" << endl;
    }
};

int main() {
    Animal* animal = new Dog();  // Pointer to base class
    animal->makeSound();  // Outputs "Woof!" due to dynamic dispatch
    
    delete animal;
    
    animal = new Cat();  // Reassign pointer to a Cat object
    animal->makeSound();  // Outputs "Meow!" due to dynamic dispatch

    delete animal;
    return 0;
}
