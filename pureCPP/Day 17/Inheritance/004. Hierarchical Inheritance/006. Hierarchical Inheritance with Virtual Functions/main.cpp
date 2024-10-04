#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks." << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows." << endl;
    }
};

void makeSound(Animal* animal) {
    animal->sound();  // Polymorphism in action
}

int main() {
    Dog myDog;
    Cat myCat;

    makeSound(&myDog); // Calls Dog's overridden sound method
    makeSound(&myCat); // Calls Cat's overridden sound method

    return 0;
}
