#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "Animal sound!" << endl;
    }
    virtual ~Animal() {}
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Meow!" << endl;
    }
};

void playWithAnimal(Animal* animal) {
    Cat* catPtr = dynamic_cast<Cat*>(animal);  // Safe downcasting
    if (catPtr) {
        cout << "Playing with the cat." << endl;
        catPtr->makeSound();  // Calls Cat's method
    } else {
        cout << "Not a cat!" << endl;
    }
}

int main() {
    Animal* animalPtr = new Cat();  // Upcasting
    playWithAnimal(animalPtr);  // Downcasting inside the function

    delete animalPtr;
    return 0;
}
