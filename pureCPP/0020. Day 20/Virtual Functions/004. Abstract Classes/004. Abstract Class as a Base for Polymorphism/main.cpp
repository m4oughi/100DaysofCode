#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() = 0; // Pure virtual function
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

void makeSound(Animal* animal) {
    animal->sound();  // Polymorphic behavior
}

int main() {
    Dog d;
    Cat c;

    makeSound(&d);  // Calls Dog's sound()
    makeSound(&c);  // Calls Cat's sound()

    return 0;
}
