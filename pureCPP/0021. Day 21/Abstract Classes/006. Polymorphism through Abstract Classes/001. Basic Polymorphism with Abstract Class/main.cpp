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

void playSound(Animal* animal) {
    animal->makeSound();  // Polymorphic behavior
}

int main() {
    Dog dog;
    Cat cat;

    playSound(&dog);  // Outputs "Woof!"
    playSound(&cat);  // Outputs "Meow!"
    return 0;
}
