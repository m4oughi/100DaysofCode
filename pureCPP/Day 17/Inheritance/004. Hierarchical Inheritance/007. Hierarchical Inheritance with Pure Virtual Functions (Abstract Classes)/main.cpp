#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() = 0; // Pure virtual function
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

int main() {
    Animal* myDog = new Dog();
    Animal* myCat = new Cat();

    myDog->sound();  // Calls Dog's implementation of sound()
    myCat->sound();  // Calls Cat's implementation of sound()

    delete myDog;
    delete myCat;

    return 0;
}
