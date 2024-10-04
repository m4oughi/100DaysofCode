#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    Animal(string type) {
        cout << type << " constructor called." << endl;
    }

    ~Animal() {
        cout << "Animal destructor called." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    Dog() : Animal("Dog") {  // Explicitly calling base class constructor
        cout << "Dog constructor without parameters." << endl;
    }

    ~Dog() {
        cout << "Dog destructor called." << endl;
    }
};

int main() {
    Dog myDog;
    return 0;
}
