#include <iostream>
using namespace std;

// Abstract Base Class
class LivingBeing {
public:
    virtual void breathe() = 0;  // Pure virtual function
    virtual ~LivingBeing() {}    // Virtual destructor
};

// Abstract Class 1
class Animal : public virtual LivingBeing {
public:
    virtual void walk() = 0;
};

// Abstract Class 2
class Human : public virtual LivingBeing {
public:
    virtual void speak() = 0;
};

// Derived Class
class Cyborg : public Animal, public Human {
public:
    void breathe() override {
        cout << "Cyborg breathing!" << endl;
    }
    void walk() override {
        cout << "Cyborg walking!" << endl;
    }
    void speak() override {
        cout << "Cyborg speaking!" << endl;
    }
};

int main() {
    Cyborg cyborg;
    cyborg.breathe();  // Outputs: Cyborg breathing!
    cyborg.walk();     // Outputs: Cyborg walking!
    cyborg.speak();    // Outputs: Cyborg speaking!

    return 0;
}
