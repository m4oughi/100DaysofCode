#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "Animal sound!" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Bark!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Meow!" << endl;
    }
};

int main() {
    Animal* animals[2];
    Dog myDog;
    Cat myCat;

    animals[0] = &myDog;  // Upcasting Dog* to Animal*
    animals[1] = &myCat;  // Upcasting Cat* to Animal*

    for (int i = 0; i < 2; i++) {
        animals[i]->makeSound();  // Calls correct overridden function
    }

    return 0;
}
