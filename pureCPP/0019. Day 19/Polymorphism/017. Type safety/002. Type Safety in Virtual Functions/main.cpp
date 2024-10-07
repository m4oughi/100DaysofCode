#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() const {
        cout << "Some animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() const override {
        cout << "Bark" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() const override {
        cout << "Meow" << endl;
    }
};

void makeSound(const Animal& animal) {
    animal.sound();  // Ensures type-safe access to the derived class's method
}

int main() {
    Dog dog;
    Cat cat;

    makeSound(dog);  // Calls Dog's sound method
    makeSound(cat);  // Calls Cat's sound method

    return 0;
}
