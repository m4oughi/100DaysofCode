#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animal sound." << endl;
    }
};

class Mammal : public Animal {
public:
    void sound() {
        cout << "Mammal sound." << endl;
    }
};

class Dog : public Mammal {
public:
    void sound() {
        Animal::sound(); // Calls Animal's sound()
        Mammal::sound(); // Calls Mammal's sound()
        cout << "Dog barks." << endl;
    }
};

int main() {
    Dog myDog;
    myDog.sound();  // Resolves ambiguity using scope resolution
    return 0;
}
