#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {  // Virtual function
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {  // Overrides the base class virtual function
        cout << "Woof Woof" << endl;
    }
};

int main() {
    Animal* animal = new Dog();
    animal->sound();  // Calls Dog's version of sound due to virtual function

    delete animal;
    return 0;
}
