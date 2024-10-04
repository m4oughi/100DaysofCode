#include <iostream>
using namespace std;

// Abstract base class
class Animal {
public:
    virtual Animal* clone() = 0;  // Pure virtual function
};

// Derived class Dog with covariant return type
class Dog : public Animal {
public:
    Dog* clone() override {
        cout << "Cloning a Dog." << endl;
        return new Dog(*this);
    }
};

int main() {
    Dog myDog;
    Dog* newDog = myDog.clone();  // Returns a Dog pointer (covariant return type)
    delete newDog;
    return 0;
}