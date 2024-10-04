#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

// Derived class attempting to override with incorrect signature
class Dog : public Animal {
public:
    // Incorrect override (without the override keyword, this would compile without warning)
    void sound(int volume) /*override*/ {  // Uncomment `override` for compiler error
        cout << "Dog barks loudly at volume " << volume << endl;
    }
};

int main() {
    Dog myDog;
    // myDog.sound();  // This would fail if `override` was correctly applied
    myDog.sound(10);  // Incorrectly allowed without compiler enforcement
    return 0;
}
