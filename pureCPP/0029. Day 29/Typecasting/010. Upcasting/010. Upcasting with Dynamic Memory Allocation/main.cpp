#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "Animal sound!" << endl;
    }

    virtual ~Animal() = default;
};

class Elephant : public Animal {
public:
    void makeSound() override {
        cout << "Trumpet!" << endl;
    }
};

int main() {
    Animal* animalPtr = new Elephant();  // Upcasting Elephant* to Animal*
    animalPtr->makeSound();  // Calls Elephant's method

    delete animalPtr;  // Correctly calls Elephant's destructor

    return 0;
}
