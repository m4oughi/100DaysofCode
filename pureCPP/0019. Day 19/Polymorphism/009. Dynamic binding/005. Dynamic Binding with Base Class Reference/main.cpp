#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Woof Woof" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Meow Meow" << endl;
    }
};

void makeSound(Animal& animal) {  // Function takes base class reference
    animal.sound();  // Calls appropriate method using dynamic binding
}

int main() {
    Dog dog;
    Cat cat;

    makeSound(dog);  // Calls Dog's sound
    makeSound(cat);  // Calls Cat's sound

    return 0;
}
