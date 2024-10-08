#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {  // Virtual function
        cout << "Some generic animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {  // Override the virtual function
        cout << "Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {  // Override the virtual function
        cout << "Meow!" << endl;
    }
};

int main() {
    Animal* animal = new Dog();
    animal->sound();  // Calls Dog's sound() method

    animal = new Cat();
    animal->sound();  // Calls Cat's sound() method

    delete animal;
    return 0;
}
