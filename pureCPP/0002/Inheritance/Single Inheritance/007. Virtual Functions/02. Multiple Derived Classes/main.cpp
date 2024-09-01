#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void sound() {
        cout << "Some generic animal sound." << endl;
    }
};

// Derived class Dog
class Dog : public Animal {
public:
    void sound() override {
        cout << "Bark!" << endl;
    }
};

// Derived class Cat
class Cat : public Animal {
public:
    void sound() override {
        cout << "Meow!" << endl;
    }
};

int main() {
    Animal* animalPtr1 = new Dog();  // Base class pointer to Dog object
    Animal* animalPtr2 = new Cat();  // Base class pointer to Cat object

    animalPtr1->sound();  // Calls Dog's sound()
    animalPtr2->sound();  // Calls Cat's sound()

    delete animalPtr1;  // Clean up
    delete animalPtr2;  // Clean up
    return 0;
}
