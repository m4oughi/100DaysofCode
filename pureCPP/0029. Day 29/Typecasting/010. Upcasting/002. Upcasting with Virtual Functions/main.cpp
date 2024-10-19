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

int main() {
    Dog myDog;
    Animal* animalPtr = &myDog;  // Upcasting

    animalPtr->makeSound();  // Calls Dog's version due to virtual function

    return 0;
}
