#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "Animal makes a sound." << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override { // Override the virtual function
        cout << "Dog barks." << endl;
    }
};

int main() {
    Animal* myAnimal = new Dog();
    myAnimal->speak(); // Calls the Dog's speak method due to virtual function
    delete myAnimal;
    return 0;
}
