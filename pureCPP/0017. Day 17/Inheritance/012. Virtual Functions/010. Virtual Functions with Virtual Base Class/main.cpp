#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

// Intermediate class with virtual inheritance
class Mammal : virtual public Animal {
public:
    void sound() override {
        cout << "Mammal sound." << endl;
    }
};

// Another intermediate class with virtual inheritance
class Bird : virtual public Animal {
public:
    void sound() override {
        cout << "Bird sound." << endl;
    }
};

// Derived class inheriting from both Mammal and Bird
class Bat : public Mammal, public Bird {
public:
    void sound() override {
        cout << "Bat sound." << endl;
    }
};

int main() {
    Bat myBat;
    myBat.sound();  // Calls Bat's sound() function
    return 0;
}
