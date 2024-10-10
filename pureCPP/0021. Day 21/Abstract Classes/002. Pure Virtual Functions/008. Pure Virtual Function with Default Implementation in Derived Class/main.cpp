#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() = 0;
};

class Mammal : public Animal {
public:
    // Providing default implementation for pure virtual function
    void makeSound() override {
        cout << "Some generic mammal sound!" << endl;
    }
};

class Dog : public Mammal {
public:
    // Overriding the default implementation
    void makeSound() override {
        cout << "Woof!" << endl;
    }
};

int main() {
    Mammal mammal;
    mammal.makeSound();  // Outputs "Some generic mammal sound!"
    
    Dog dog;
    dog.makeSound();     // Outputs "Woof!"
    return 0;
}
