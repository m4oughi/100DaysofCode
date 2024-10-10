#include <iostream>
using namespace std;

class Animal {
public:
    virtual Animal* clone() const = 0;  // Pure virtual function
};

class Dog : public Animal {
public:
    Dog* clone() const override {  // Covariant return type (Dog* instead of Animal*)
        return new Dog(*this);
    }
};

int main() {
    Dog dog;
    Animal* dogClone = dog.clone();  // Outputs nothing, but works as expected
    delete dogClone;
    return 0;
}
