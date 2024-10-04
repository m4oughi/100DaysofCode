#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal sound." << endl;
    }
};

class Mammal : public Animal {
public:
    void sound() override {
        cout << "Mammal sound." << endl;
    }
};

class Dog : public Mammal {
public:
    void sound() override {
        cout << "Dog barks." << endl;
    }
};

class Cat : public Mammal {
public:
    void sound() override {
        cout << "Cat meows." << endl;
    }
};

void makeAnimalSound(Animal* animal) {
    animal->sound();  // Calls the appropriate overridden method
}

int main() {
    Dog myDog;
    Cat myCat;

    makeAnimalSound(&myDog);  // Calls Dog's overridden sound()
    makeAnimalSound(&myCat);  // Calls Cat's overridden sound()

    return 0;
}
