#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() = 0; // Pure virtual function
};

class Dog : public Animal {
public:
    void speak() override { // Override the pure virtual function
        cout << "Dog barks." << endl;
    }
};

int main() {
    Animal* myDog = new Dog();
    myDog->speak(); // Calls the derived class implementation
    delete myDog;
    return 0;
}
