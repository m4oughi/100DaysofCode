#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "Animal sound!" << endl;
    }
};

class Lion : public Animal {
public:
    void makeSound() override {
        cout << "Roar!" << endl;
    }
};

void printSound(Animal* animal) {
    animal->makeSound();
}

void printSound(Lion* lion) {
    lion->makeSound();
}

int main() {
    Lion myLion;
    Animal* animalPtr = &myLion;  // Upcasting

    printSound(animalPtr);  // Calls the Animal* overload, even though it's a Lion

    return 0;
}
