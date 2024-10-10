#include <iostream>
using namespace std;

class IAnimal {
public:
    virtual void makeSound() = 0;  // Pure virtual function
    virtual ~IAnimal() = default;
};

class IMammal {
public:
    virtual void walk() = 0;  // Another interface
    virtual ~IMammal() = default;
};

class Dog : public IAnimal, public IMammal {
public:
    void makeSound() override {
        cout << "Woof!" << endl;
    }
    void walk() override {
        cout << "Dog is walking..." << endl;
    }
};

int main() {
    Dog dog;

    IAnimal* animalPtr = &dog;
    IMammal* mammalPtr = &dog;

    animalPtr->makeSound();  // Outputs "Woof!"
    mammalPtr->walk();       // Outputs "Dog is walking..."
    
    return 0;
}
