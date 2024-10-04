#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    Animal() {
        cout << "Animal constructor called." << endl;
    }

    ~Animal() {
        cout << "Animal destructor called." << endl;
    }
};

// Intermediate class with virtual inheritance
class Mammal : virtual public Animal {
public:
    Mammal() {
        cout << "Mammal constructor called." << endl;
    }

    ~Mammal() {
        cout << "Mammal destructor called." << endl;
    }
};

// Another intermediate class with virtual inheritance
class Bird : virtual public Animal {
public:
    Bird() {
        cout << "Bird constructor called." << endl;
    }

    ~Bird() {
        cout << "Bird destructor called." << endl;
    }
};

// Derived class inheriting from both Mammal and Bird
class Bat : public Mammal, public Bird {
public:
    Bat() {
        cout << "Bat constructor called." << endl;
    }

    ~Bat() {
        cout << "Bat destructor called." << endl;
    }
};

int main() {
    Bat myBat;
    return 0;
}
