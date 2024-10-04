#include <iostream>
using namespace std;

// Abstract base class 1
class Flyer {
public:
    virtual void fly() = 0;   // Pure virtual function
};

// Abstract base class 2
class Walker {
public:
    virtual void walk() = 0;  // Pure virtual function
};

// Derived class implementing both abstract classes
class Bird : public Flyer, public Walker {
public:
    void fly() override {
        cout << "Bird flies." << endl;
    }

    void walk() override {
        cout << "Bird walks." << endl;
    }
};

int main() {
    Bird myBird;
    myBird.fly();   // Calls Bird's fly function
    myBird.walk();  // Calls Bird's walk function
    return 0;
}
