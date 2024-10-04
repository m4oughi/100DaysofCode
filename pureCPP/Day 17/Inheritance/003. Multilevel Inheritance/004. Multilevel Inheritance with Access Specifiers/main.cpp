#include <iostream>
using namespace std;

class Animal {
protected:
    void protectedSound() {
        cout << "Animal makes a protected sound." << endl;
    }
};

class Mammal : public Animal {
public:
    void accessProtectedSound() {
        protectedSound(); // Allowed because it's protected
    }
};

class Dog : public Mammal {
public:
    void makeSound() {
        accessProtectedSound(); // Access through Mammal class
    }
};

int main() {
    Dog myDog;
    myDog.makeSound();
    return 0;
}
