#include <iostream>
using namespace std;

// Base class
class Animal {
protected:
    void breathe() {
        cout << "Animal breathes." << endl;
    }
};

// Intermediate class with virtual inheritance
class Mammal : virtual public Animal {
protected:
    void liveBirth() {
        cout << "Mammal gives live birth." << endl;
    }
};

// Derived class with multiple inheritance
class Bat : public Mammal {
public:
    void fly() {
        breathe();   // Accessing protected member of base class through virtual inheritance
        liveBirth(); // Accessing protected member of intermediate class
    }
};

int main() {
    Bat myBat;
    myBat.fly();  // Calls methods inherited through virtual inheritance
    return 0;
}
