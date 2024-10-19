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

void objectSlicing(Animal animal) {  // Slicing occurs here
    animal.makeSound();  // Calls Animal's version, not Dog's
}

int main() {
    Dog myDog;
    objectSlicing(myDog);  // Upcasting, but causes slicing

    return 0;
}
