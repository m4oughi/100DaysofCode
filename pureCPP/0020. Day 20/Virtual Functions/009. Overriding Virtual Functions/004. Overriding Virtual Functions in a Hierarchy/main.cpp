#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Woof!" << endl;
    }
};

class Bulldog : public Dog {
public:
    void sound() override {
        cout << "Bulldog Woof!" << endl;
    }
};

int main() {
    Animal* animalPtr = new Bulldog();
    animalPtr->sound();  // Calls Bulldog's sound()

    delete animalPtr;
    return 0;
}
